def insert_school(mongo_collection, **kwargs):
    return mongo_collection.insert_one(kwargs).inserted_id
    # print("hola buenas {}".format(mongo_collection))
    # print("hola buenas {}".format(kwargs.values()))
    # for key, value in kwargs.items():

        # print("hola buenas {}".format(key))
        # print("hola buenas {}".format(value))