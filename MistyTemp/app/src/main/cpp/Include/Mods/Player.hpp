#include "../XRInput.hpp"
#include "../BNMIncludes.hpp"
#include "../BNMResolve.hpp"
#include "../PhotonResolve.hpp"
#include "../httplib.h"
#include "../json.hpp"
#include "../XRInput.hpp"

class PlayerMods {
    public:static void TempName1() {
            Class cls = Class("Photon.Pun", "PhotonNetwork", Image("PhotonUnityNetworking"));
            if (cls.IsValid()) {
                Method<void> setname = cls.GetMethod("set_NickName", 1);
                if (setname.IsValid()) setname(CreateMonoString("__"));
            }
        }

            public:static void TempName2() {
            Class cls = Class("Photon.Pun", "PhotonNetwork", Image("PhotonUnityNetworking"));
            if (cls.IsValid()) {
                Method<void> setname = cls.GetMethod("set_NickName", 1);
                if (setname.IsValid()) setname(CreateMonoString("TempName2"));
            }
        }


public:static void TempName3() {
            Class cls = Class("Photon.Pun", "PhotonNetwork", Image("PhotonUnityNetworking"));
            if (cls.IsValid()) {
                Method<void> setname = cls.GetMethod("set_NickName", 1);
                if (setname.IsValid()) setname(CreateMonoString("TempName3"));
            }
        }

        public:static void TempName4() {
            Class cls = Class("Photon.Pun", "PhotonNetwork", Image("PhotonUnityNetworking"));
            if (cls.IsValid()) {
                Method<void> setname = cls.GetMethod("set_NickName", 1);
                if (setname.IsValid()) setname(CreateMonoString("TempName4"));
            }
        }
    };