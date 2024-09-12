#!/usr/bin/python3
"""Pagination Helper"""


def index_range(page: int, page_size: int) -> tuple:
    """
    The function should return a tuple of size two containing a start index and an end index corresponding to the range of indexes to return in a list for those particular pagination parameters.
    """
    # index_start = (page - 1) * page_size
    # index_end = page * page_size
    # return (index_start, index_end)
    return ((page - 1) * page_size, page_size * page)