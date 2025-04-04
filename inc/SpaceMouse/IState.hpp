#ifndef IState_HPP_INCLUDED
#define IState_HPP_INCLUDED
// <copyright file="IState.hpp" company="3Dconnexion">
// ------------------------------------------------------------------------------------------------
// Copyright (c) 2018-2022 3Dconnexion. All rights reserved.
//
// This file and source code are an integral part of the "3Dconnexion Software Developer Kit",
// including all accompanying documentation, and is protected by intellectual property laws. All
// use of the 3Dconnexion Software Developer Kit is subject to the License Agreement found in the
// "LicenseAgreementSDK.txt" file. All rights not expressly granted by 3Dconnexion are reserved.
// ------------------------------------------------------------------------------------------------
// </copyright>
// <history>
// ************************************************************************************************
// File History
//
// $Id: IState.hpp 16047 2019-04-05 12:51:24Z mbonk $
//
// </history>
#include <navlib/navlib_types.h>

namespace TDx {
namespace SpaceMouse {
namespace Navigation3D {
  /// <summary>
  /// Interface to access the navigation state.
  /// </summary>
class IState {
public:
#if !defined(_MSC_VER) || (_MSC_VER > 1700)
  virtual ~IState() = default;
#else
  virtual ~IState() = 0 {
  }
#endif

  /// <summary>
  /// Is called when the navigation library starts or stops a navigation transaction.
  /// </summary>
  /// <param name="transaction">The transaction number: >0 begin, ==0 end.</param>
  /// <returns>0 = no error, otherwise &lt;0.</returns>
  virtual long SetTransaction(long transaction) = 0;

  /// <summary>
  /// Is called when the navigation instance starts or stops a sequence of motion frames.
  /// </summary>
  /// <param name="motion">The motion flag: true = start, false = end.</param>
  /// <returns>0 = no error, otherwise &lt;0.</returns>
  /// <remarks>This can be used to start an animation loop.</remarks>
  virtual long SetMotionFlag(bool motion) = 0;
};
} // namespace Navigation3D
} // namespace SpaceMouse
} // namespace TDx
#endif // IState_HPP_INCLUDED
