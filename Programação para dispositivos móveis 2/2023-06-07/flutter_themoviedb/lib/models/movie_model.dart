import 'package:json_annotation/json_annotation.dart';

part 'movie_model.g.dart';

@JsonSerializable()
class MovieModel {
  int id = 0;
  bool? adult = false;

  @JsonKey(name: 'backdrop_path')
  String backdropPath = '';

  @JsonKey(name: 'original_language')
  String originalLanguage = '';

  @JsonKey(name: 'original_title')
  String originalTitle = '';

  @JsonKey(name: 'overview')
  String overview = '';

  @JsonKey(name: 'popularity')
  double popularity = 0;

  @JsonKey(name: 'poster_path')
  String posterPath = '';

  @JsonKey(name: 'release_date')
  String releaseDate = '';

  @JsonKey(name: 'title')
  String title = '';

  @JsonKey(name: 'vote_average')
  double voteAverage = 0;

  @JsonKey(name: 'vote_count')
  int voteCount = 0;

  factory MovieModel.fromJson(Map<String, dynamic> json) {
    return _$MovieModelFromJson(json);
  }

  @override
  String toString() {
    return '''
      MovieModel(
        id: $id,
        adult: $adult,
        backdrop_path: $backdropPath,
        original_language: $originalLanguage,
        original_title: $originalTitle,
        overview: $overview,
        popularity: $popularity,
        poster_path: $posterPath,
        release_date: $releaseDate,
        title: $title,
        vote_average: $voteAverage,
        vote_count: $voteCount,
      )
    ''';
  }
}
