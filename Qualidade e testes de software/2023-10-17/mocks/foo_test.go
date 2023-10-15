package foo

import (
	mock_foo "mocks/mocks"
	"testing"

	"go.uber.org/mock/gomock"
)

func TestGetFoo(t *testing.T) {
	expected := "foo"

	// Instancia controller
	ctrl := gomock.NewController(t)

	// Instancia o mock
	getterMock := mock_foo.NewMockGetter(ctrl)

	// Controla como o mock deve se comportar
	getterMock.
		EXPECT().
		Get().
		Return(expected)

	actual := GetFoo(getterMock)

	if actual != expected {
		t.Errorf("Fail, expected %s, got %s", expected, actual)
	}
}
