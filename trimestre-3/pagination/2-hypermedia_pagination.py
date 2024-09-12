import csv
import math
from typing import List, Dict


def index_range(page: int, page_size: int) -> tuple:
    """
    The function should return a tuple of size two containing a start index and an end index corresponding to the range of indexes to return in a list for those particular pagination parameters.
    """
    return ((page - 1) * page_size, page_size * page)


class Server:
    """Server class to paginate a database of popular baby names.
    """
    DATA_FILE = "Popular_Baby_Names.csv"

    def __init__(self):
        self.__dataset = None

    def dataset(self) -> List[List]:
        """Cached dataset
        """
        if self.__dataset is None:
            with open(self.DATA_FILE) as f:
                reader = csv.reader(f)
                dataset = [row for row in reader]
            self.__dataset = dataset[1:]

        return self.__dataset

    def get_page(self, page: int = 1, page_size: int = 10) -> List[List]:
        assert isinstance(page, int) and page > 0
        assert isinstance(page_size, int) and page_size > 0

        (index_start, index_end) = index_range(page=page, page_size=page_size)
        dataset = self.dataset()

        index_end = min(index_end, len(dataset))

        return dataset[index_start:index_end]

    def get_hyper(self, page: int = 1, page_size: int = 10) -> Dict:
        # pass
        data = self.get_page(page=page, page_size=page_size)
        next_page = None
        prev_page = None

        if len(self.get_page(page=page + 1, page_size=page_size)) > page_size:
            next_page = page + 1

        if page != 1:
            prev_page = page - 1

        total_page = int(len(self.dataset()) / page_size)

        dict_get_hyper = {
            'page_size': page_size,
            'page': page,
            'data': data,
            'next_page': next_page,
            'prev_page': prev_page,
            'total_page': total_page
        }

        return dict_get_hyper
