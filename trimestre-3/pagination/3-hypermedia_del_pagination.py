#!/usr/bin/env python3
"""
Deletion-resilient hypermedia pagination
"""

import csv
import math
from typing import List, Dict


# def index_range(page: int, page_size: int) -> tuple:
#     """
#     The function should return a tuple of size two containing a start index and an end index corresponding to the range of indexes to return in a list for those particular pagination parameters.
#     """
#     return ((page - 1) * page_size, page_size * page)

class Server:
    """Server class to paginate a database of popular baby names.
    """
    DATA_FILE = "Popular_Baby_Names.csv"

    def __init__(self):
        self.__dataset = None
        self.__indexed_dataset = None

    def dataset(self) -> List[List]:
        """Cached dataset
        """
        if self.__dataset is None:
            with open(self.DATA_FILE) as f:
                reader = csv.reader(f)
                dataset = [row for row in reader]
            self.__dataset = dataset[1:]

        return self.__dataset

    def indexed_dataset(self) -> Dict[int, List]:
        """Dataset indexed by sorting position, starting at 0
        """
        if self.__indexed_dataset is None:
            dataset = self.dataset()
            truncated_dataset = dataset[:1000]
            self.__indexed_dataset = {
                i: dataset[i] for i in range(len(dataset))
            }
        return self.__indexed_dataset

    # def get_page(self, page: int = 1, page_size: int = 10) -> List[List]:
    #     assert isinstance(page, int) and page > 0
    #     assert isinstance(page_size, int) and page_size > 0

    #     (index_start, index_end) = index_range(page=page, page_size=page_size)
    #     dataset = self.dataset()

    #     index_end = min(index_end, len(dataset))

    #     return dataset[index_start:index_end]

    def get_hyper_index(self, index: int = None, page_size: int = 10) -> Dict:
        dataset = self.dataset()

        assert index >= 0 and index <= len(dataset)

        index_start = index
        index_end = index + page_size
        index_end = min(index_end, len(dataset))

        dict_get_hyper_index = {
            'index': index,
            'next_index': index_end,
            'page_size': page_size,
            'data': dataset[index_start:index_end]
        }

        return dict_get_hyper_index