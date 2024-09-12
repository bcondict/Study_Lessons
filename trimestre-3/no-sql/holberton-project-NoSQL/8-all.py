
def list_all(mongo_collection):
    document_list = []

    document_list = mongo_collection.find()
    return document_list