import 'package:json_annotation/json_annotation.dart';

@JsonSerializable()
class ApiData {
  double? temprature;
  String? uiicon;

  void fromJson(Map<String, dynamic> json) {
    uiicon = json["weather"][0]["icon"];
    temprature = json["main"]["temp"] - 273.15;
  }
}
