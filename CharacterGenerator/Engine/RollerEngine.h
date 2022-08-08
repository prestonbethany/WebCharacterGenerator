#pragma once
#ifndef ROLLER_ENGINE_H
#define ROLLER_ENGINE_H

#ifdef ROLLER_ENGINE_EXPORTS
#define ROLLER_ENGINE_API __declspec(dllexport)
#else
#define ROLLER_ENGINE_API __declspec(dllimport)
#endif

extern ROLLER_ENGINE_API int statRoller();

extern ROLLER_ENGINE_API void quickSort(int* arr, int elements);

#endif