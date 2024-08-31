{"nbformat":4,"nbformat_minor":0,"metadata":{"colab":{"provenance":[]},"kernelspec":{"name":"python3","display_name":"Python 3"}},"cells":[{"cell_type":"markdown","metadata":{"id":"m1I6ZGRS8Ag6"},"source":["# **Convert Your Keras Model to ONNX Format**"]},{"cell_type":"code","metadata":{"id":"HVBxi9hb8MBh","colab":{"base_uri":"https://localhost:8080/"},"executionInfo":{"status":"ok","timestamp":1668585719505,"user_tz":-330,"elapsed":8796,"user":{"displayName":"Ravi Shankar","userId":"00061894771295061894"}},"outputId":"7ade4857-c9e0-4a2b-9123-e17354976008"},"source":["!pip install tf2onnx"],"execution_count":null,"outputs":[{"output_type":"stream","name":"stdout","text":["Looking in indexes: https://pypi.org/simple, https://us-python.pkg.dev/colab-wheels/public/simple/\n","Collecting tf2onnx\n","  Downloading tf2onnx-1.13.0-py3-none-any.whl (442 kB)\n","\u001b[K     |████████████████████████████████| 442 kB 4.1 MB/s \n","\u001b[?25hRequirement already satisfied: requests in /usr/local/lib/python3.7/dist-packages (from tf2onnx) (2.23.0)\n","Requirement already satisfied: six in /usr/local/lib/python3.7/dist-packages (from tf2onnx) (1.15.0)\n","Requirement already satisfied: numpy>=1.14.1 in /usr/local/lib/python3.7/dist-packages (from tf2onnx) (1.21.6)\n","Requirement already satisfied: flatbuffers<3.0,>=1.12 in /usr/local/lib/python3.7/dist-packages (from tf2onnx) (1.12)\n","Collecting onnx>=1.4.1\n","  Downloading onnx-1.12.0-cp37-cp37m-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (13.1 MB)\n","\u001b[K     |████████████████████████████████| 13.1 MB 56.7 MB/s \n","\u001b[?25hRequirement already satisfied: typing-extensions>=3.6.2.1 in /usr/local/lib/python3.7/dist-packages (from onnx>=1.4.1->tf2onnx) (4.1.1)\n","Requirement already satisfied: protobuf<=3.20.1,>=3.12.2 in /usr/local/lib/python3.7/dist-packages (from onnx>=1.4.1->tf2onnx) (3.19.6)\n","Requirement already satisfied: urllib3!=1.25.0,!=1.25.1,<1.26,>=1.21.1 in /usr/local/lib/python3.7/dist-packages (from requests->tf2onnx) (1.24.3)\n","Requirement already satisfied: idna<3,>=2.5 in /usr/local/lib/python3.7/dist-packages (from requests->tf2onnx) (2.10)\n","Requirement already satisfied: chardet<4,>=3.0.2 in /usr/local/lib/python3.7/dist-packages (from requests->tf2onnx) (3.0.4)\n","Requirement already satisfied: certifi>=2017.4.17 in /usr/local/lib/python3.7/dist-packages (from requests->tf2onnx) (2022.9.24)\n","Installing collected packages: onnx, tf2onnx\n","Successfully installed onnx-1.12.0 tf2onnx-1.13.0\n"]}]},{"cell_type":"code","metadata":{"id":"nD19G6Zn8Og3"},"source":["import onnx\n","import tf2onnx\n","import tensorflow"],"execution_count":null,"outputs":[]},{"cell_type":"code","source":[],"metadata":{"id":"fBY47xgIdv4u"},"execution_count":null,"outputs":[]},{"cell_type":"code","source":["from google.colab import drive\n","drive.mount('/content/drive')"],"metadata":{"colab":{"base_uri":"https://localhost:8080/"},"id":"3HrRBt-5dxmW","executionInfo":{"status":"ok","timestamp":1668585852911,"user_tz":-330,"elapsed":24448,"user":{"displayName":"Ravi Shankar","userId":"00061894771295061894"}},"outputId":"53588143-7bb5-4fe2-da2d-4e6e607a19aa"},"execution_count":null,"outputs":[{"output_type":"stream","name":"stdout","text":["Mounted at /content/drive\n"]}]},{"cell_type":"code","metadata":{"id":"kFVOl2913Wzw"},"source":["model = tensorflow.keras.models.load_model('/content/drive/My Drive/Colab Notebooks/Training-and-Deploying-ML-Models-on-Edge-Devices-master/cifar_classifier.h5')\n","onnx_model, _ = tf2onnx.convert.from_keras(model)\n","onnx.save(onnx_model, '/content/drive/My Drive/Colab Notebooks/Training-and-Deploying-ML-Models-on-Edge-Devices-master/cifar_classifier.onnx')"],"execution_count":null,"outputs":[]},{"cell_type":"code","metadata":{"id":"IBxaKNQu8bVl","colab":{"base_uri":"https://localhost:8080/"},"executionInfo":{"status":"ok","timestamp":1668585866729,"user_tz":-330,"elapsed":530,"user":{"displayName":"Ravi Shankar","userId":"00061894771295061894"}},"outputId":"82323000-9954-478a-e491-243236a88151"},"source":["input_onnx_model = '/content/drive/My Drive/Colab Notebooks/Training-and-Deploying-ML-Models-on-Edge-Devices-master/cifar_classifier.onnx'\n","model = onnx.load(input_onnx_model)\n","onnx.checker.check_model(model)\n","print('The ONNX model is checked!')"],"execution_count":null,"outputs":[{"output_type":"stream","name":"stdout","text":["The ONNX model is checked!\n"]}]},{"cell_type":"code","source":[],"metadata":{"id":"cXEe5PTNd782"},"execution_count":null,"outputs":[]}]}