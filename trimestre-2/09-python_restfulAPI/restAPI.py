from flask import Flask, jsonify, request

app = Flask(__name__)

resources = []

@app.route("/api/resources", methods=["GET"])
def get_resources():
    print("mafe pregunta mucho")
    # if request.method == "POST":
        # print("mafe pregunta mucho")
    # if request.method == "GET":
    #     print("Carlos no ha preguntado!!!!")
    return jsonify(resources)

@app.route("/api/resources", methods=["POST"])
def add_resource():
    resource = request.get_json()
    print(f"resource : {resource}")
    resources.append(resource)

    return jsonify(resources)

if __name__ == "__main__":
    app.run(debug=True)

