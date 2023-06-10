import 'package:dio/dio.dart';

class HttpManager {
  final Dio dio;

  HttpManager({required this.dio});

  Future sendRequest() async {
    dio.request('', options: Options(), data: {});
  }
}