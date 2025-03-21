


void FUN_0004c61c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0x78bfe478;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 < -0x2b51123d) {
            if (iVar4 < -0x62b70c11) {
              if (iVar4 == -0x785fbcb0) {
                iVar4 = -0x139e621a;
              }
              else if (iVar4 == -0x6413e45e) {
                (*DAT_000a40e0)(param_1,param_2);
                iVar4 = -0x2b51123d;
              }
            }
            else {
              iVar1 = -0x231e119d;
              if (iVar4 != -0x46bf4060) {
                iVar1 = iVar4;
              }
              iVar2 = -0x785fbcb0;
              if (iVar4 != -0x541e3fb3) {
                iVar2 = iVar1;
              }
              bVar3 = iVar4 != -0x62b70c11;
              iVar4 = -0x785fbcb0;
              if (bVar3) {
                iVar4 = iVar2;
              }
            }
          }
          if (iVar4 < -0x139e621a) break;
          iVar1 = iVar4;
          if (iVar4 == 0x78bfe478) {
            iVar1 = -0x231e119d;
          }
          iVar2 = -0x541e3fb3;
          if (iVar4 != 0x578b2cd0) {
            iVar2 = iVar1;
          }
          bVar3 = iVar4 != -0x139e621a;
          iVar4 = -0x1ea1e1bc;
          if (bVar3) {
            iVar4 = iVar2;
          }
        }
        if (iVar4 != -0x231e119d) break;
        iVar4 = 0x578b2cd0;
      }
      if (iVar4 != -0x1ea1e1bc) break;
      iVar4 = -0x6413e45e;
    }
  } while (iVar4 != -0x2b51123d);
  return;
}



void FUN_0004c798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  char *local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  char local_91;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  long local_70;
  code *local_68;
  
  iVar2 = 0x1dd9398;
  iVar3 = -0x4f2cf1ed;
LAB_0004c804:
  do {
    while (iVar6 = iVar3, iVar3 = iVar6, iVar6 < -0x291fc8) {
      if (iVar6 < -0x446e3ec9) {
        if (iVar6 < -0x4f2cf1ed) {
          if (iVar6 < -0x68275a7f) {
            iVar3 = -0x1849ad51;
            if (((iVar6 != -0x72e2e40e) && (iVar3 = 0x7864068d, iVar6 != -0x6bf82225)) &&
               (iVar3 = iVar6, iVar6 == -0x6be5cbb9)) {
              local_b0 = DAT_000a4070;
              iVar3 = -0x6bf82225;
            }
          }
          else if (iVar6 == -0x68275a7f) {
            lVar5 = _objc_msgSend(local_c8,local_c0);
            local_b1 = 0 < lVar5;
            _objc_release(local_c8);
            iVar3 = 0x654e5391;
          }
          else {
            iVar7 = -0x64f847d1;
            iVar8 = -0x1849ad51;
            if (iVar6 != -0x4fdfe8a0) {
              iVar8 = iVar6;
            }
LAB_0004cd58:
            iVar3 = 0x27a7e52c;
            if (iVar6 != iVar7) {
              iVar3 = iVar8;
            }
          }
        }
        else if (iVar6 < -0x48173888) {
          iVar3 = 0x44615742;
          if (iVar6 != -0x4f2cf1ed) {
            if (iVar6 == -0x4c068021) {
              _objc_release(local_80);
              _objc_release(local_90);
              iVar3 = 0x1080ab99;
            }
            else {
              iVar3 = -0x10570893;
              if (iVar6 != -0x4a6e7e68) {
                iVar3 = iVar6;
              }
            }
          }
        }
        else if (iVar6 < -0x46776a4f) {
          iVar3 = -0x47abef96;
          if ((iVar6 != -0x48173888) && (iVar3 = iVar6, iVar6 == -0x47abef96)) {
            local_80 = DAT_00099300;
            DAT_00099300 = local_88;
            iVar3 = 0x5ae52414;
          }
        }
        else {
          iVar7 = -0xa89b478;
          if (iVar6 != -0x45682b2d) {
            iVar7 = iVar6;
          }
          iVar3 = 0x188651f8;
          if (iVar6 != -0x46776a4f) {
            iVar3 = iVar7;
          }
        }
      }
      else if (iVar6 < -0x1849ad51) {
        if (iVar6 < -0x351d574f) {
          if (iVar6 == -0x446e3ec9) {
            pcVar1 = &cf_RearCamera;
            if (local_70 != 1) {
              pcVar1 = &cf_frontcamera;
            }
            _objc_storeStrong(&DAT_00099300,pcVar1);
            iVar3 = 0x188651f8;
          }
          else if (iVar6 == -0x401ce9f3) {
            local_90 = _objc_msgSend(local_d8,local_d0);
            _objc_retain(local_90);
            lVar5 = _objc_msgSend(local_90,local_c0);
            local_88 = &cf_Tn_DdP4Y;
            if (lVar5 != 1) {
              local_88 = &cf_MRn_DdP4Y;
            }
            _objc_retain(local_88);
            iVar3 = -0x386e8a1c;
          }
          else {
            iVar3 = -0x48173888;
            if (iVar6 != -0x386e8a1c) {
              iVar3 = iVar6;
            }
          }
        }
        else if (iVar6 < -0x1fc552db) {
          if (iVar6 == -0x351d574f) {
            _objc_msgSend(local_d8,local_d0);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            lVar5 = _objc_msgSend(uVar4,local_c0);
            pcVar1 = &cf_Tn_DdP4Y;
            if (lVar5 != 1) {
              pcVar1 = &cf_MRn_DdP4Y;
            }
            _objc_retain(pcVar1);
            iVar3 = -0x401ce9f3;
          }
          else {
            iVar3 = 0x6178bf78;
            if (iVar6 != -0x2e707868) {
              iVar3 = iVar6;
            }
          }
        }
        else if (iVar6 == -0x1fc552db) {
          local_91 = _objc_msgSend(local_b0,local_a0,local_a8);
          iVar3 = -0x17d08ee5;
        }
        else {
          iVar3 = -0x68275a7f;
          if (iVar6 != -0x1c234b35) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < -0x104fe66d) {
        if (iVar6 == -0x1849ad51) {
          iVar3 = 0x2ae01ec3;
        }
        else if (iVar6 == -0x17d08ee5) {
          iVar3 = -0x1f6da29;
          if (local_91 == '\0') {
            iVar3 = -0x45682b2d;
          }
        }
        else {
          iVar3 = 0x4ede8e87;
          if (iVar6 != -0x10570893) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < -0x549054e) {
        if (iVar6 == -0x104fe66d) {
          _objc_msgSend(local_c8,local_c0);
          _objc_release(local_c8);
          iVar3 = -0x68275a7f;
        }
        else if (iVar6 == -0xa89b478) {
          local_78 = _objc_msgSend(local_d8,local_d0);
          _objc_retain(local_78);
          local_70 = _objc_msgSend(local_78,local_c0);
          iVar3 = 0x213a6112;
        }
      }
      else if (iVar6 == -0x549054e) {
        uVar4 = _objc_retain(param_3);
        _objc_msgSend(uVar4,"device");
        _objc_retainAutoreleasedReturnValue();
        iVar3 = 0x44615742;
      }
      else {
        iVar3 = -0x401ce9f3;
        if (iVar6 != -0x1f6da29) {
          iVar3 = iVar6;
        }
      }
    }
    if (0x3987ab76 < iVar6) {
      if (iVar6 < 0x5ae52414) {
        if (iVar6 < 0x44e23691) {
          if (iVar6 == 0x3987ab77) {
            iVar3 = -0x1c234b35;
          }
          else if (iVar6 == 0x43783437) {
            _objc_release(local_d8);
            iVar3 = -0x291fc8;
          }
          else if (iVar6 == 0x44615742) {
            _objc_retain(param_3);
            local_d0 = "device";
            local_c8 = _objc_msgSend(param_3,"device");
            _objc_retain(local_c8);
            local_d8 = param_3;
            local_c0 = "position";
            iVar3 = 0x3987ab77;
          }
        }
        else if (iVar6 == 0x44e23691) {
          _objc_release(local_78);
          iVar3 = 0x4ede8e87;
        }
        else if (iVar6 == 0x4ede8e87) {
          _objc_release(local_78);
          iVar3 = 0x5584c5d1;
        }
        else {
          iVar3 = iVar2;
          if (iVar6 != 0x5584c5d1) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < 0x68f90545) {
        if (iVar6 == 0x5ae52414) {
          iVar3 = 0x1b8ffb3b;
        }
        else if (iVar6 == 0x6178bf78) {
          (*local_68)(param_1,param_2,param_3);
          iVar3 = 0x68f90545;
        }
        else {
          iVar3 = -0x72e2e40e;
          if (iVar6 != 0x654e5391) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < 0x6f1266a9) {
        iVar7 = iVar2;
        if (iVar6 != 0x6c9ceeb0) {
          iVar7 = iVar6;
        }
        iVar3 = -0x291fc8;
        if (iVar6 != 0x68f90545) {
          iVar3 = iVar7;
        }
      }
      else if (iVar6 == 0x6f1266a9) {
        _objc_msgSend(local_b0,local_a0,local_a8);
        iVar3 = -0x1fc552db;
      }
      else if (iVar6 == 0x7864068d) {
        local_a8 = _g_isenabledw2ProChinese;
        local_a0 = "fileExistsAtPath:";
        iVar3 = 0xcd68d4f;
      }
      goto LAB_0004c804;
    }
    if (iVar6 < 0x1b8ffb3b) {
      if (iVar6 < 0xd8073aa) {
        if (iVar6 != -0x291fc8) {
          iVar7 = 0x1dd9398;
          iVar8 = 0x363b0280;
          if (iVar6 != 0xcd68d4f) {
            iVar8 = iVar6;
          }
          goto LAB_0004cd58;
        }
        _objc_release(local_d8);
        iVar3 = 0xe549770;
      }
      else if (iVar6 < 0x1080ab99) {
        iVar3 = 0x7864068d;
        if ((iVar6 != 0xd8073aa) && (iVar3 = iVar6, iVar6 == 0xe549770)) {
          return;
        }
      }
      else if (iVar6 == 0x1080ab99) {
        _objc_release(local_80);
        _objc_release(local_90);
        iVar3 = 0x6c9ceeb0;
      }
      else if (iVar6 == 0x188651f8) {
        pcVar1 = &cf_RearCamera;
        if (local_70 != 1) {
          pcVar1 = &cf_frontcamera;
        }
        _objc_storeStrong(&DAT_00099300,pcVar1);
        iVar3 = -0x4a6e7e68;
      }
    }
    else if (iVar6 < 0x28ddefdd) {
      iVar3 = 0x1080ab99;
      if (iVar6 != 0x1b8ffb3b) {
        if (iVar6 == 0x213a6112) {
          iVar3 = -0x46776a4f;
        }
        else {
          iVar3 = iVar6;
          if (iVar6 == 0x27a7e52c) {
            local_68 = DAT_000a40e8;
            iVar3 = -0x2e707868;
          }
        }
      }
    }
    else if (iVar6 < 0x354a55f1) {
      if (iVar6 == 0x28ddefdd) {
        _objc_msgSend(local_d8,local_d0);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar4,local_c0);
        iVar3 = -0xa89b478;
      }
      else if ((iVar6 == 0x2ae01ec3) && (iVar3 = -0x6be5cbb9, local_b1 == '\0')) {
        iVar3 = iVar2;
      }
    }
    else if (iVar6 == 0x354a55f1) {
      DAT_00099300 = local_88;
      iVar3 = -0x47abef96;
    }
    else {
      iVar3 = -0x1fc552db;
      if (iVar6 != 0x363b0280) {
        iVar3 = iVar6;
      }
    }
  } while( true );
}



void FUN_0004d184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_68;
  
  iVar2 = 0x27c23c94;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar2 = iVar3, -0xafa4f9d < iVar3) {
          if (iVar3 < 0x27c23c94) {
            if (iVar3 == -0xafa4f9c) {
              _objc_retain(param_3);
              local_68 = param_3;
              iVar2 = 0x4447188b;
            }
            else if (iVar3 == 0x26ccdef) {
              _objc_release(local_68);
              iVar2 = -0x5ccc6a84;
            }
          }
          else {
            iVar1 = iVar3;
            if (iVar3 == 0x27c23c94) {
              iVar1 = -0xafa4f9c;
            }
            iVar2 = -0x74ced141;
            if (iVar3 != 0x4447188b) {
              iVar2 = iVar1;
            }
          }
        }
        if (iVar3 < -0x54f8ba4a) break;
        if (iVar3 == -0x54f8ba4a) {
          _objc_retain(param_3);
          iVar2 = -0xafa4f9c;
        }
        else {
          iVar2 = 0x26ccdef;
          if (iVar3 != -0x3fee8af5) {
            iVar2 = iVar3;
          }
        }
      }
      if (iVar3 != -0x74ced141) break;
      (*DAT_000a40f0)(param_1,param_2,param_3);
      iVar2 = -0x3fee8af5;
    }
  } while (iVar3 != -0x5ccc6a84);
  return;
}



void FUN_0004d2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  local_78 = param_3;
  _objc_retain(param_3);
  local_70 = param_4;
  _objc_retain(param_4);
  DAT_000a40a8 = 1;
  local_a0 = PTR___NSConcreteStackBlock_00068030;
  local_98 = 0xc2000000;
  local_90 = FUN_0005834c;
  puStack_88 = &DAT_00068640;
  local_68 = &local_80;
  iVar4 = 0x2c9dad71;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 < 0x2c9dad71) {
          if (iVar4 == -0x716cad24) {
            _objc_retain(local_70);
            *local_68 = param_4;
            uVar2 = _objc_retainBlock(&local_a0);
            pcVar1 = DAT_000a40f8;
            uVar3 = _objc_msgSend(uVar2,"copy");
            (*pcVar1)(param_1,param_2,param_3,uVar3);
            _objc_release(uVar3);
            _objc_release(uVar2);
            iVar4 = 0x6425cc64;
          }
          else if (iVar4 == -0x69fa1812) {
            iVar4 = -0x6fee1fa;
          }
          else if (iVar4 == -0x6fee1fa) {
            _objc_release(*local_68);
            _objc_release(local_70);
            _objc_release(local_78);
            iVar4 = 0x7e9939e3;
          }
        }
        if (iVar4 != 0x2c9dad71) break;
        iVar4 = -0x716cad24;
      }
      if (iVar4 != 0x6425cc64) break;
      iVar4 = -0x69fa1812;
    }
  } while (iVar4 != 0x7e9939e3);
  return;
}



undefined8 FUN_0004d4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  char local_141;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  char local_111;
  undefined8 local_110;
  char local_101;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  iVar3 = -0x5c90470a;
LAB_0004d544:
  while (iVar8 = iVar3, iVar3 = iVar8, -0x6391a55 < iVar8) {
    if (iVar8 < 0x45bff720) {
      if (iVar8 < 0x20c43e8e) {
        if (iVar8 < 0x88e3a0e) {
          if (iVar8 < 0x20f738d) {
            iVar3 = -0x4377c42e;
            if (iVar8 != -0x6391a54) {
              if (iVar8 == -0x332e3cc) {
                unaff_x21 = local_78;
                iVar3 = 0x36ae5a6b;
              }
              else {
                iVar3 = iVar8;
                if (iVar8 == -0x24881a6) {
                  local_e9 = _objc_msgSend(local_100,local_150,local_f8);
                  iVar3 = -0x25f053e9;
                }
              }
            }
          }
          else if (iVar8 < 0x41f8dcb) {
            if (iVar8 == 0x20f738d) {
              local_80 = _objc_msgSend(0x4000000000000000,local_88,local_90,local_d8,0);
              _objc_retain(local_80);
              iVar3 = 0x5a029454;
            }
            else if (iVar8 == 0x335e856) {
              local_e0 = _g_tempFile;
              iVar3 = -0x40fd767a;
            }
          }
          else {
            iVar9 = 0x4f6cd753;
            if (iVar8 != 0x85d39a6) {
              iVar9 = iVar8;
            }
            iVar3 = -0x25dd3b6a;
            if (iVar8 != 0x41f8dcb) {
              iVar3 = iVar9;
            }
          }
        }
        else if (iVar8 < 0xfbd0dc9) {
          iVar3 = -0x4377c42e;
          if (iVar8 != 0x91fc53d) {
            iVar3 = iVar8;
          }
          iVar9 = -0xdd42240;
          if (iVar8 != 0x9153793) {
            iVar9 = iVar3;
          }
          iVar3 = -0x44ba2493;
          if (iVar8 != 0x88e3a0e) {
            iVar3 = iVar9;
          }
        }
        else if (iVar8 < 0x1de93c42) {
          if (iVar8 == 0xfbd0dc9) {
            _UIImageJPEGRepresentation(0x3ff0000000000000,unaff_x20);
            unaff_x21 = _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x20);
            _objc_release(local_d0);
            iVar3 = 0x36ae5a6b;
          }
          else if (iVar8 == 0x1807963e) {
            iVar3 = -0x822231c;
          }
        }
        else {
          iVar9 = 0x486c0ed6;
          if (iVar8 != 0x201e6e09) {
            iVar9 = iVar8;
          }
          iVar3 = -0x19d3fce2;
          if (iVar8 != 0x1de93c42) {
            iVar3 = iVar9;
          }
        }
      }
      else if (iVar8 < 0x33de482e) {
        if (iVar8 < 0x299c6db0) {
          if (iVar8 == 0x20c43e8e) {
            iVar3 = -0x709f978c;
          }
          else {
            iVar3 = 0x335e856;
            if ((iVar8 != 0x28997e78) && (iVar3 = iVar8, iVar8 == 0x295be789)) {
              iVar3 = 0x75b1b06e;
            }
          }
        }
        else if (iVar8 < 0x302605b2) {
          if (iVar8 == 0x299c6db0) {
            local_88 = &_OBJC_CLASS___UIImage;
            local_90 = "imageWithCIImage:scale:orientation:";
            iVar3 = 0x20f738d;
          }
          else {
            iVar9 = 0x2d61b942;
LAB_0004e1f8:
            iVar3 = iVar8;
            if (iVar8 == iVar9) {
              iVar3 = -0x7d52c57a;
            }
          }
        }
        else {
          iVar3 = 0x3ea47dd7;
          if ((iVar8 != 0x302605b2) && (iVar3 = iVar8, iVar8 == 0x31aae7a0)) {
            _objc_autorelease(local_70);
            iVar3 = 0x5a9cad0c;
          }
        }
      }
      else if (iVar8 < 0x3d69e938) {
        iVar3 = -0x77054619;
        if (iVar8 != 0x33de482e) {
          if (iVar8 == 0x36ae5a6b) {
            local_70 = unaff_x21;
            iVar3 = 0x31aae7a0;
          }
          else {
            iVar3 = iVar8;
            if (iVar8 == 0x37d46310) {
              iVar3 = 0x335e856;
            }
          }
        }
      }
      else if (iVar8 < 0x4555da18) {
        if (iVar8 == 0x3d69e938) {
          iVar3 = 0x302605b2;
        }
        else if (iVar8 == 0x3ea47dd7) {
          local_150 = "fileExistsAtPath:";
          local_141 = _objc_msgSend(local_160,"fileExistsAtPath:",local_158);
          iVar3 = 0x45bff720;
        }
      }
      else {
        iVar3 = 0x5d0d9b90;
        if ((iVar8 != 0x4555da18) && (iVar3 = iVar8, iVar8 == 0x456d52ad)) {
          iVar3 = -0x2eb494ee;
        }
      }
    }
    else if (iVar8 < 0x5b6f8933) {
      if (iVar8 < 0x554b1594) {
        if (iVar8 < 0x4c8f0f9b) {
          if (iVar8 == 0x45bff720) {
            iVar3 = -0x1e98f85a;
            if (local_141 == '\0') {
              iVar3 = 0x62d1ff2f;
            }
          }
          else {
            iVar3 = -0x2eb494ee;
            if ((iVar8 != 0x486c0ed6) && (iVar3 = iVar8, iVar8 == 0x4be4ca2e)) {
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar4 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar4,"firstObject");
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              uVar7 = _g_tempFile;
              _g_tempFile = uVar6;
              _objc_release(uVar7);
              _objc_release(uVar5);
              _objc_release(uVar4);
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar7,"firstObject");
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar7,"stringByAppendingPathComponent:",&cf__vcam_is_mirrored_mark);
              iVar3 = -0x3f0a5383;
            }
          }
        }
        else if (iVar8 < 0x5229d843) {
          iVar9 = 0x88e3a0e;
          if (iVar8 != 0x4f6cd753) {
            iVar9 = iVar8;
          }
          iVar3 = 0x5d0d9b90;
          if (iVar8 != 0x4c8f0f9b) {
            iVar3 = iVar9;
          }
        }
        else if (iVar8 == 0x5229d843) {
          local_b8 = DAT_000a4070;
          iVar3 = 0x4555da18;
        }
        else if (iVar8 == 0x54051e1d) {
LAB_0004e7f8:
          iVar3 = 0x5f8d9c94;
        }
      }
      else if (iVar8 < 0x5a029454) {
        if (iVar8 < 0x577fcb51) {
          if (iVar8 == 0x554b1594) {
            uVar7 = _CMSampleBufferGetImageBuffer(local_120);
            local_d8 = _objc_msgSend(&_OBJC_CLASS___CIImage,"imageWithCVImageBuffer:",uVar7);
            _objc_retain(local_d8);
            local_d0 = local_d8;
            iVar3 = 0x33de482e;
          }
          else if (iVar8 == 0x57107835) {
            local_78 = (*DAT_000a4100)(param_1,param_2,param_3);
            iVar3 = 0x5c76fba5;
          }
        }
        else {
          if (iVar8 != 0x577fcb51) {
            iVar9 = 0x58fcff31;
            goto LAB_0004e134;
          }
          iVar3 = 0x1de93c42;
        }
      }
      else if (iVar8 < 0x5acf371c) {
        iVar3 = -0x647212be;
        if ((iVar8 != 0x5a029454) && (iVar3 = iVar8, iVar8 == 0x5a9cad0c)) {
          return local_70;
        }
      }
      else if (iVar8 == 0x5acf371c) {
        _objc_msgSend(0x4000000000000000,local_a0,"imageWithCIImage:scale:orientation:",local_d8,2);
        _objc_retainAutoreleasedReturnValue();
        iVar3 = -0x65471305;
      }
      else if (iVar8 == 0x5b5aa3b8) {
        iVar3 = 0x7b23ee00;
      }
    }
    else if (iVar8 < 0x6cdd3f28) {
      if (iVar8 < 0x5f8d9c94) {
        iVar3 = 0x75b1b06e;
        if (((iVar8 != 0x5b6f8933) && (iVar3 = -0x535da2a6, iVar8 != 0x5c76fba5)) &&
           (iVar3 = iVar8, iVar8 == 0x5d0d9b90)) {
          local_b0 = _g_isMirroredMarkxz;
          iVar3 = 0x20c43e8e;
        }
      }
      else if (iVar8 < 0x62d1ff2f) {
        if (iVar8 == 0x5f8d9c94) {
          _objc_retain(local_128);
          uVar7 = _g_isMirroredMark;
          _g_isMirroredMark = local_130;
          _objc_release(uVar7);
          _objc_release(local_138);
          _objc_release(local_140);
          iVar3 = -0x33a7d5c7;
        }
        else if (iVar8 == 0x61b1f470) {
          _objc_msgSend(local_110,local_150,_g_tempFile);
          iVar3 = -0x19d3fce2;
        }
      }
      else {
        iVar3 = -0x3f0a5383;
        if (iVar8 != 0x62d1ff2f) {
          iVar9 = 0x676ebb10;
          goto LAB_0004e1f8;
        }
      }
    }
    else if (iVar8 < 0x75b1b06e) {
      if (iVar8 == 0x6cdd3f28) {
        iVar3 = -0x36e01003;
      }
      else {
        if (iVar8 == 0x7162b425) {
          _objc_msgSend(local_100,local_150,local_f8);
          goto LAB_0004e834;
        }
        if (iVar8 == 0x7426a672) {
          bVar2 = local_101 == '\0';
          iVar8 = -0x4a6d98a9;
LAB_0004e8f4:
          iVar3 = 0x554b1594;
          if (bVar2) {
            iVar3 = iVar8;
          }
        }
      }
    }
    else if (iVar8 < 0x7aa28705) {
      if (iVar8 == 0x75b1b06e) {
        local_110 = DAT_000a4070;
        iVar3 = 0x577fcb51;
      }
      else {
        iVar3 = 0x9153793;
        if (iVar8 != 0x7a88b296) {
          iVar3 = iVar8;
        }
      }
    }
    else if (iVar8 == 0x7aa28705) {
      iVar3 = 0x28997e78;
    }
    else if (iVar8 == 0x7b23ee00) {
      local_100 = DAT_000a4070;
      local_f8 = _g_isMirroredMarkfbs;
      iVar3 = 0x6cdd3f28;
    }
  }
  if (-0x3f0a5384 < iVar8) {
    if (iVar8 < -0x25dd3b6a) {
      if (-0x3184bb6a < iVar8) {
        if (iVar8 < -0x2eee3974) {
          if (iVar8 == -0x3184bb69) {
            _objc_retain(local_128);
            uVar7 = _g_isMirroredMark;
            _g_isMirroredMark = local_130;
            _objc_release(uVar7);
            _objc_release(local_138);
            _objc_release(local_140);
            goto LAB_0004e7f8;
          }
          if (iVar8 != -0x31821d9f) {
            iVar3 = -0x7e45d8ef;
            if (iVar8 != -0x303d0203) {
              iVar3 = iVar8;
            }
            goto LAB_0004d544;
          }
          iVar8 = 0x299c6db0;
          cVar1 = local_a1;
        }
        else {
          if (iVar8 < -0x27dd9905) {
            iVar3 = -0xdd42240;
            if ((iVar8 != -0x2eee3974) && (iVar3 = iVar8, iVar8 == -0x2eb494ee)) {
              local_128 = local_130;
              iVar3 = -0x62409935;
            }
            goto LAB_0004d544;
          }
          if (iVar8 != -0x27dd9905) {
            iVar3 = 0x2d61b942;
            if (iVar8 != -0x25f053e9) {
              iVar3 = iVar8;
            }
            goto LAB_0004d544;
          }
          _objc_release(local_c8);
          iVar8 = 0x5229d843;
          cVar1 = local_b9;
        }
        iVar3 = 0x91fc53d;
        if (cVar1 == '\0') {
          iVar3 = iVar8;
        }
        goto LAB_0004d544;
      }
      if (iVar8 < -0x3bfde82a) {
        if (iVar8 == -0x3f0a5383) {
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"firstObject");
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          uVar7 = _g_tempFile;
          _g_tempFile = uVar6;
          _objc_release(uVar7);
          _objc_release(uVar5);
          _objc_release(uVar4);
          local_140 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_140);
          local_138 = _objc_msgSend(local_140,"firstObject");
          _objc_retain(local_138);
          local_130 = _objc_msgSend(local_138,local_138,"stringByAppendingPathComponent:",
                                    &cf__vcam_is_mirrored_mark);
          iVar3 = 0x201e6e09;
        }
        else if (iVar8 == -0x3e380980) {
          local_120 = _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",0,0);
          iVar3 = -0x83a5a7b;
        }
        else {
          iVar3 = -0x6cd1e462;
          if (iVar8 != -0x3cbb866e) {
            iVar3 = iVar8;
          }
        }
      }
      else if (iVar8 < -0x34a530b2) {
        iVar3 = -0x303d0203;
        if ((iVar8 != -0x3bfde82a) && (iVar3 = iVar8, iVar8 == -0x36e01003)) {
LAB_0004e834:
          iVar3 = -0x24881a6;
        }
      }
      else if (iVar8 == -0x34a530b2) {
        _objc_msgSend(local_160,"fileExistsAtPath:",local_158);
        iVar3 = 0x3ea47dd7;
      }
      else if (iVar8 == -0x33a7d5c7) {
        iVar3 = -0x1e98f85a;
      }
    }
    else if (iVar8 < -0xdd42240) {
      if (iVar8 < -0x1c1e3cc3) {
        if (iVar8 == -0x25dd3b6a) {
          iVar3 = -0x437efd3b;
        }
        else {
          iVar3 = -0x6f869fe0;
          if ((iVar8 != -0x1ec5783e) && (iVar3 = iVar8, iVar8 == -0x1e98f85a)) {
LAB_0004e8b0:
            iVar3 = -0x3e380980;
          }
        }
      }
      else if (iVar8 < -0x19651926) {
        iVar3 = -0x65471305;
        if ((iVar8 != -0x1c1e3cc3) && (iVar3 = iVar8, iVar8 == -0x19d3fce2)) {
          local_101 = _objc_msgSend(local_110,local_150,_g_tempFile);
          iVar3 = 0x7a88b296;
        }
      }
      else {
        iVar3 = -0x647212be;
        if ((iVar8 != -0x19651926) && (iVar3 = iVar8, iVar8 == -0x140d2341)) {
          local_111 = local_120 != 0;
          iVar3 = -0x41f97bf6;
        }
      }
    }
    else if (iVar8 < -0x83a5a7b) {
      if (iVar8 == -0xdd42240) {
        iVar3 = 0x7426a672;
      }
      else if (iVar8 == -0xb98f7d9) {
        unaff_x20 = local_80;
        iVar3 = 0xfbd0dc9;
      }
      else if (iVar8 == -0xb343610) {
        _objc_autorelease(local_70);
        iVar3 = 0x31aae7a0;
      }
    }
    else if (iVar8 < -0x6b9e6e7) {
      iVar9 = -0x332e3cc;
      if (iVar8 != -0x822231c) {
        iVar9 = iVar8;
      }
      iVar3 = -0x140d2341;
      if (iVar8 != -0x83a5a7b) {
        iVar3 = iVar9;
      }
    }
    else if (iVar8 == -0x6b9e6e7) {
      iVar3 = -0x27dd9905;
    }
    else if (iVar8 == -0x69414b0) {
      _objc_retain(local_78);
      iVar3 = -0x535da2a6;
    }
    goto LAB_0004d544;
  }
  if (-0x62409936 < iVar8) {
    if (iVar8 < -0x4a6d98a9) {
      if (iVar8 < -0x5658527b) {
        if (iVar8 == -0x62409935) {
          iVar3 = 0x54051e1d;
        }
        else {
          iVar3 = -0x822231c;
          if (iVar8 != -0x5ef23db8) {
            iVar9 = -0x5c90470a;
LAB_0004e134:
            iVar3 = iVar8;
            if (iVar8 == iVar9) {
              iVar3 = 0x85d39a6;
            }
          }
        }
        goto LAB_0004d544;
      }
      if (iVar8 < -0x51267365) {
        if (iVar8 == -0x5658527b) {
          local_a1 = _objc_msgSend(local_b8,local_150,local_b0);
          iVar3 = -0x31821d9f;
        }
        else if (iVar8 == -0x535da2a6) {
          _objc_retain(local_78);
          iVar3 = -0x6a378283;
        }
        goto LAB_0004d544;
      }
      if (iVar8 == -0x51267365) {
        iVar3 = _objc_msgSend(local_e8,local_150,local_e0);
        bVar2 = iVar3 == 0;
        iVar8 = 0x57107835;
        goto LAB_0004e8f4;
      }
      if (iVar8 != -0x4bae5816) goto LAB_0004d544;
      iVar3 = -0x7fb6b213;
      cVar1 = local_e9;
    }
    else {
      if (-0x4377c42f < iVar8) {
        if (iVar8 < -0x40fd767a) {
          if (iVar8 == -0x4377c42e) {
            local_a0 = &_OBJC_CLASS___UIImage;
            iVar3 = -0x7b453f48;
          }
          else if (iVar8 == -0x41f97bf6) {
            iVar3 = -0x25dd3b6a;
          }
        }
        else if (iVar8 == -0x40fd767a) {
          iVar3 = -0x51267365;
        }
        else if (iVar8 == -0x3f18a3e0) {
          iVar3 = -0x44ba2493;
        }
        goto LAB_0004d544;
      }
      iVar3 = 0x7b23ee00;
      if (iVar8 == -0x4a6d98a9) goto LAB_0004d544;
      if (iVar8 == -0x44ba2493) {
        local_160 = DAT_000a4070;
        local_158 = _g_isMirroredMarkfbs;
        iVar3 = 0x3d69e938;
        goto LAB_0004d544;
      }
      iVar3 = iVar8;
      if (iVar8 != -0x437efd3b) goto LAB_0004d544;
      iVar3 = 0x5b6f8933;
      cVar1 = local_111;
    }
    if (cVar1 == '\0') {
      iVar3 = 0x57107835;
    }
    goto LAB_0004d544;
  }
  if (iVar8 < -0x6f869fe0) {
    if (iVar8 < -0x7b453f48) {
      iVar3 = -0x6f869fe0;
      if (iVar8 != -0x7fb6b213) {
        if (iVar8 == -0x7e45d8ef) {
          unaff_x20 = local_98;
          iVar3 = 0xfbd0dc9;
        }
        else {
          iVar3 = -0x4bae5816;
          if (iVar8 != -0x7d52c57a) {
            iVar3 = iVar8;
          }
        }
      }
      goto LAB_0004d544;
    }
    if (iVar8 < -0x73562498) {
      if (iVar8 == -0x7b453f48) {
        iVar3 = -0x1c1e3cc3;
      }
      else if (iVar8 == -0x77054619) {
        local_c8 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
        _objc_retain(local_c8);
        local_b9 = _objc_msgSend(local_c8,"boolForKey:",&cf_HookWaterMark);
        iVar3 = -0x6b9e6e7;
      }
      goto LAB_0004d544;
    }
    if (iVar8 == -0x73562498) {
      _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",0,0);
      goto LAB_0004e8b0;
    }
    if (iVar8 != -0x709f978c) goto LAB_0004d544;
  }
  else {
    if (iVar8 < -0x67e997dd) {
      if (iVar8 == -0x6f869fe0) {
        local_e8 = DAT_000a4070;
        iVar3 = 0x7aa28705;
      }
      else {
        iVar9 = -0x5ef23db8;
        if (iVar8 != -0x6a378283) {
          iVar9 = iVar8;
        }
        iVar3 = -0x303d0203;
        if (iVar8 != -0x6cd1e462) {
          iVar3 = iVar9;
        }
      }
      goto LAB_0004d544;
    }
    if (iVar8 < -0x648134ac) {
      if (iVar8 == -0x67e997dd) {
        _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,"boolForKey:",&cf_HookWaterMark);
        iVar3 = -0x77054619;
      }
      else if (iVar8 == -0x65471305) {
        local_98 = _objc_msgSend(0x4000000000000000,local_a0,"imageWithCIImage:scale:orientation:",
                                 local_d8,2);
        _objc_retain(local_98);
        iVar3 = -0x3cbb866e;
      }
      goto LAB_0004d544;
    }
    if (iVar8 != -0x648134ac) {
      iVar3 = -0xb98f7d9;
      if (iVar8 != -0x647212be) {
        iVar3 = iVar8;
      }
      goto LAB_0004d544;
    }
    _objc_msgSend(local_b8,local_150,local_b0);
  }
  iVar3 = -0x5658527b;
  goto LAB_0004d544;
}



undefined8 FUN_0004e9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  undefined8 unaff_x28;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  class_t *local_118;
  char *local_110;
  long local_108;
  char local_f9;
  undefined8 local_f8;
  char *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  char local_b9;
  undefined *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  iVar9 = -0x4fbd3479;
LAB_0004ea3c:
  iVar3 = iVar9;
  iVar9 = iVar3;
  if (iVar3 < 0x5542cc3) {
    if (-0x3bb8478f < iVar3) {
      if (iVar3 < -0x20c2f33e) {
        if (iVar3 < -0x2c72ced5) {
          if (iVar3 < -0x357abcc5) {
            iVar10 = -0x357abcc5;
            if (iVar3 != -0x3583357f) {
              iVar10 = iVar3;
            }
            iVar9 = 0x2b193271;
            if (iVar3 != -0x3bb8478e) {
              iVar9 = iVar10;
            }
          }
          else {
            iVar9 = 0x55794f8b;
            if ((iVar3 != -0x357abcc5) && (iVar9 = iVar3, iVar3 == -0x3550b851)) {
              _objc_autorelease(local_70);
              iVar9 = -0x70d675bf;
            }
          }
        }
        else if (iVar3 < -0x2a5b65b5) {
          iVar10 = 0x11f882b1;
          if (iVar3 != -0x2c3d2447) {
            iVar10 = iVar3;
          }
          iVar9 = 0x21bb3891;
          if (iVar3 != -0x2c72ced5) {
            iVar9 = iVar10;
          }
        }
        else if (iVar3 == -0x2a5b65b5) {
          iVar9 = 0x1129763f;
        }
        else if (iVar3 == -0x22b0d46e) {
          _objc_msgSend(0x4000000000000000,local_b8,local_b0,local_e0,2);
          iVar9 = -0x4c5fbdc9;
        }
        else if (iVar3 == -0x2213c47b) {
          _objc_release(unaff_x28);
          _objc_release(local_d8);
          unaff_x21 = unaff_x23;
          iVar9 = -0x53e47c56;
          if (unaff_w22 != 0) {
            iVar9 = -0x40784254;
          }
        }
      }
      else if (iVar3 < -0xece0621) {
        if (iVar3 < -0x1aca79bb) {
          if (iVar3 == -0x20c2f33e) {
            local_148 = "fileExistsAtPath:";
            iVar3 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isMirroredMarkfbs);
            iVar9 = 0x729bcdd6;
            if (iVar3 == 0) {
              iVar9 = -0x3bb8478e;
            }
          }
          else if (iVar3 == -0x1cf775e0) {
            _objc_retain(local_90);
            iVar9 = 0x767bb588;
          }
        }
        else if (iVar3 == -0x1aca79bb) {
          local_128 = "stringByAppendingPathComponent:";
          local_120 = _objc_msgSend(local_130,"stringByAppendingPathComponent:",
                                    &cf__w2avfictitious_mov);
          iVar9 = -0x46c04cc9;
        }
        else {
          iVar9 = 0x3e85b6d3;
          if ((iVar3 != -0x15484a1e) && (iVar9 = iVar3, iVar3 == -0x111460be)) {
            _objc_retain(local_120);
            uVar7 = _g_tempFile;
            _g_tempFile = local_120;
            _objc_release(uVar7);
            _objc_release(local_130);
            _objc_release(local_140);
            _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_138);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,local_128,&cf__vcam_is_mirrored_mark);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            uVar7 = _g_isMirroredMark;
            _g_isMirroredMark = uVar6;
            _objc_release(uVar7);
            _objc_release(uVar5);
            _objc_release(uVar4);
            iVar9 = 0x729bcdd6;
          }
        }
      }
      else if (iVar3 < 0x2438e1c) {
        iVar9 = -0x2a5b65b5;
        if ((iVar3 != -0xece0621) && (iVar9 = iVar3, iVar3 == -0x4a3714d)) {
          _objc_retain(local_a0);
          unaff_w22 = 0;
          unaff_x28 = local_a8;
          iVar9 = -0x2213c47b;
        }
      }
      else if (iVar3 == 0x41aa73f) {
        _CMSampleBufferGetImageBuffer(local_108);
        iVar9 = 0x11f882b1;
      }
      else {
        iVar9 = 0x1bb0de33;
        if ((iVar3 != 0x42dafc7) && (iVar9 = iVar3, iVar3 == 0x2438e1c)) {
          return local_70;
        }
      }
      goto LAB_0004ea3c;
    }
    if (iVar3 < -0x53e47c56) {
      if (iVar3 < -0x703772d4) {
        if (iVar3 < -0x71937053) {
          if (iVar3 == -0x7f936da8) {
            local_b8 = &_OBJC_CLASS___UIImage;
            local_b0 = "imageWithCIImage:scale:orientation:";
            iVar9 = 0x71f36869;
          }
          else if (iVar3 == -0x71db57a9) {
            local_88 = DAT_000a4108;
            iVar9 = -0x6595e26d;
          }
        }
        else if (iVar3 == -0x71937053) {
          iVar9 = 0x25579b48;
        }
        else if (iVar3 == -0x70d675bf) {
          _objc_autorelease(local_70);
          iVar9 = 0x2438e1c;
        }
        goto LAB_0004ea3c;
      }
      if (-0x67902f89 < iVar3) {
        if (iVar3 != -0x67902f88) {
          iVar8 = -0x6595e26d;
          iVar9 = 0x1a48c87b;
          bVar2 = iVar3 == -0x5e1beb00;
          iVar10 = 0x6741283f;
          goto LAB_0004f3e4;
        }
        _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,"boolForKey:",&cf_HookWaterMark);
        _objc_release(uVar7);
        iVar9 = 0x53431634;
        goto LAB_0004ea3c;
      }
      iVar8 = -0x703772d4;
      iVar9 = -0x6a632538;
      iVar10 = 0x5cd52945;
    }
    else {
      if (-0x4ba8848e < iVar3) {
        if (iVar3 < -0x46c04cc9) {
          if (iVar3 == -0x4ba8848d) {
            local_b9 = _objc_msgSend(local_c8,local_148,_g_isMirroredMarkxz);
            iVar9 = 0x4148dc47;
          }
          else if (iVar3 == -0x482de2d6) {
            _objc_msgSend(local_118,local_110,0,0);
            iVar9 = 0x78442d90;
          }
        }
        else if (iVar3 == -0x46c04cc9) {
          iVar9 = -0x111460be;
        }
        else if (iVar3 == -0x40784254) {
          local_70 = unaff_x21;
          iVar9 = -0x70d675bf;
        }
        else if (iVar3 == -0x3e345fb1) {
          iVar9 = -0x2a5b65b5;
        }
        goto LAB_0004ea3c;
      }
      if (-0x4fbd347a < iVar3) {
        iVar9 = 0x3e85b6d3;
        if ((iVar3 != -0x4fbd3479) && (iVar9 = iVar3, iVar3 == -0x4c5fbdc9)) {
          local_a8 = _objc_msgSend(0x4000000000000000,local_b8,local_b0,local_e0,2);
          local_a0 = local_a8;
          iVar9 = 0x64da3a93;
        }
        goto LAB_0004ea3c;
      }
      iVar8 = -0x53e47c56;
      iVar9 = -0x53d8b5c0;
      iVar10 = 0x6fa027f8;
    }
    if (iVar3 != iVar9) {
      iVar10 = iVar3;
    }
    iVar9 = -0x71db57a9;
    if (iVar3 != iVar8) {
      iVar9 = iVar10;
    }
    goto LAB_0004ea3c;
  }
  if (iVar3 < 0x3e85b6d3) {
    if (0x1ef47cfe < iVar3) {
      if (iVar3 < 0x25579b48) {
        if (iVar3 < 0x21bb3891) {
          iVar9 = -0x6a632538;
          if ((iVar3 != 0x1ef47cff) && (iVar9 = iVar3, iVar3 == 0x2157a491)) {
            _objc_msgSend(local_e8,local_f0,local_f8);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = 0x55794f8b;
          }
        }
        else if (iVar3 == 0x21bb3891) {
          local_c8 = DAT_000a4070;
          iVar9 = -0x5e1beb00;
        }
        else {
          iVar9 = 0x21bb3891;
          if (iVar3 != 0x22a54c95) {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 < 0x2b193271) {
        if (iVar3 == 0x25579b48) {
          _objc_retain(local_78);
          unaff_x21 = local_80;
          iVar9 = -0x40784254;
        }
        else {
          iVar9 = 0x78442d90;
          if (iVar3 != 0x2918c517) {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 == 0x2b193271) {
        local_140 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
        _objc_retain(local_140);
        local_138 = "firstObject";
        local_130 = _objc_msgSend(local_140,"firstObject");
        _objc_retain(local_130);
        iVar9 = -0x53d8b5c0;
      }
      else {
        iVar9 = -0x6a632538;
        if ((iVar3 != 0x36a55884) && (iVar9 = iVar3, iVar3 == 0x38e11eba)) {
          _objc_msgSend(local_c8,local_148,_g_isMirroredMarkxz);
          iVar9 = -0x4ba8848d;
        }
      }
      goto LAB_0004ea3c;
    }
    if (0x11f882b0 < iVar3) {
      if (iVar3 < 0x1aa44ede) {
        if (iVar3 == 0x11f882b1) {
          local_f8 = _CMSampleBufferGetImageBuffer(local_108);
          local_e8 = &_OBJC_CLASS___CIImage;
          local_f0 = "imageWithCVImageBuffer:";
          iVar9 = -0x3583357f;
        }
        else {
          iVar9 = 0x7fe6abc3;
          if (iVar3 != 0x1a48c87b) {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 == 0x1aa44ede) {
        _NSSearchPathForDirectoriesInDomains(0xd,1,1);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,"firstObject");
        _objc_retainAutoreleasedReturnValue();
        iVar9 = 0x2b193271;
      }
      else if (iVar3 == 0x1bb0de33) {
        iVar9 = 0x591aa13;
      }
      else if (iVar3 == 0x1c55a5c2) {
        _objc_msgSend(local_130,local_130,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov)
        ;
        iVar9 = -0x1aca79bb;
      }
      goto LAB_0004ea3c;
    }
    if (iVar3 < 0x76ccdce) {
      if (iVar3 == 0x5542cc3) {
        local_98 = _objc_msgSend(0x4000000000000000,&_OBJC_CLASS___UIImage,
                                 "imageWithCIImage:scale:orientation:",local_e0,0);
        _objc_retain(local_98);
        local_90 = _UIImageJPEGRepresentation(0x3ff0000000000000,local_98);
        iVar9 = -0x1cf775e0;
      }
      else if (iVar3 == 0x591aa13) {
        iVar3 = 0x5542cc3;
        cVar1 = local_b9;
        goto LAB_0004f468;
      }
      goto LAB_0004ea3c;
    }
    iVar8 = 0x76ccdce;
    iVar9 = -0xece0621;
    bVar2 = iVar3 == 0x1129763f;
    iVar10 = -0x20c2f33e;
LAB_0004f3e4:
    if (!bVar2) {
      iVar10 = iVar3;
    }
  }
  else {
    if (iVar3 < 0x64da3a93) {
      if (iVar3 < 0x53431634) {
        if (iVar3 < 0x46179998) {
          iVar8 = 0x3e85b6d3;
          iVar9 = 0x76ccdce;
          bVar2 = iVar3 == 0x4148dc47;
          iVar10 = 0x42dafc7;
          goto LAB_0004f3e4;
        }
        iVar9 = 0x53431634;
        if ((iVar3 != 0x46179998) && (iVar9 = iVar3, iVar3 == 0x48216dc8)) {
          iVar3 = 0x22a54c95;
          cVar1 = local_c9;
LAB_0004f468:
          iVar9 = -0x7f936da8;
          if (cVar1 == '\0') {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 < 0x57c27535) {
        if (iVar3 == 0x53431634) {
          _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
          uVar7 = _objc_retainAutoreleasedReturnValue();
          local_c9 = _objc_msgSend(uVar7,"boolForKey:",&cf_HookWaterMark);
          _objc_release(uVar7);
          iVar9 = 0x48216dc8;
        }
        else if (iVar3 == 0x55794f8b) {
          local_e0 = _objc_msgSend(local_e8,local_f0,local_f8);
          _objc_retain(local_e0);
          local_d8 = local_e0;
          iVar9 = 0x7c7acdfa;
        }
      }
      else {
        iVar9 = 0x1bb0de33;
        if (iVar3 != 0x57c27535) {
          if (iVar3 == 0x5cd52945) {
            iVar9 = -0x2c3d2447;
            if (local_f9 == '\0') {
              iVar9 = -0x53e47c56;
            }
          }
          else {
            iVar9 = iVar3;
            if (iVar3 == 0x601040e1) {
              (*local_88)(param_1,param_2,param_3,param_4);
              iVar9 = 0x7fe6abc3;
            }
          }
        }
      }
      goto LAB_0004ea3c;
    }
    if (0x767bb587 < iVar3) {
      if (iVar3 < 0x799f82dc) {
        if (iVar3 == 0x767bb588) {
          unaff_w22 = 1;
          unaff_x23 = local_90;
          unaff_x28 = local_98;
          iVar9 = -0x2213c47b;
        }
        else if (iVar3 == 0x78442d90) {
          local_108 = _objc_msgSend(local_118,local_110,0,0);
          local_f9 = local_108 != 0;
          iVar9 = 0x799f82dc;
        }
      }
      else if (iVar3 == 0x799f82dc) {
        iVar9 = 0x1ef47cff;
      }
      else if (iVar3 == 0x7c7acdfa) {
        iVar9 = 0x46179998;
      }
      else if (iVar3 == 0x7fe6abc3) {
        local_80 = (*local_88)(param_1,param_2,param_3,param_4);
        local_78 = local_80;
        iVar9 = -0x71937053;
      }
      goto LAB_0004ea3c;
    }
    if (0x6fa027f7 < iVar3) {
      iVar9 = -0x1aca79bb;
      if (((iVar3 != 0x6fa027f8) && (iVar9 = -0x4c5fbdc9, iVar3 != 0x71f36869)) &&
         (iVar9 = iVar3, iVar3 == 0x729bcdd6)) {
        local_118 = &objc::class_t::GetFrame;
        local_110 = "getCurrentFrame::";
        iVar9 = 0x2918c517;
      }
      goto LAB_0004ea3c;
    }
    iVar8 = 0x64da3a93;
    iVar9 = -0x4a3714d;
    iVar10 = -0x4ba8848d;
    if (iVar3 != 0x6741283f) {
      iVar10 = iVar3;
    }
  }
  if (iVar3 != iVar8) {
    iVar9 = iVar10;
  }
  goto LAB_0004ea3c;
}



void FUN_0004f878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    // WARNING: Could not recover jumptable at 0x0004f8c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a29d0)();
  return;
}



void FUN_0004fef0(void)

{
                    // WARNING: Could not recover jumptable at 0x0004ff28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a2e20)();
  return;
}



void FUN_00050660(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long local_a8;
  char local_99;
  code *local_98;
  long local_90;
  char local_81;
  undefined8 local_80;
  char *local_78;
  undefined **local_70;
  code *local_68;
  
  iVar5 = 0x711c811c;
LAB_000506f4:
  while (iVar3 = iVar5, 0xcd830da < iVar3) {
    iVar5 = 0x5b9ddb30;
    if (iVar3 < 0x37fc6631) {
      if (iVar3 < 0x1f87426d) {
        if (iVar3 < 0x1b37e6bf) {
          if (iVar3 == 0xcd830db) {
            (*local_98)(param_1,param_2,param_3,param_4);
            iVar5 = 0x51eb87f9;
          }
          else {
            iVar6 = 0x23233d1a;
            if (iVar3 != 0x149f54e6) {
              iVar6 = iVar3;
            }
            if (iVar3 != 0xfb79f84) {
              iVar5 = iVar6;
            }
          }
        }
        else if (iVar3 < 0x1e27c5a4) {
          if (iVar3 == 0x1b37e6bf) {
            _objc_retain(param_3);
            _objc_retain(param_4);
            local_a8 = param_4;
            iVar5 = -0x18d48f16;
          }
          else {
            iVar5 = -0x3b41c1e;
            if (iVar3 != 0x1d0c5e11) {
              iVar5 = iVar3;
            }
          }
        }
        else {
          iVar5 = -0x5e0c6828;
          if ((iVar3 != 0x1e27c5a4) && (iVar5 = iVar3, iVar3 == 0x1ebf4e8a)) {
            (*local_68)(param_1,param_2,param_3,param_4);
            iVar5 = 0x37fc6631;
          }
        }
      }
      else if (iVar3 < 0x284437d0) {
        iVar5 = -0x3b41c1e;
        if (((iVar3 != 0x1f87426d) && (iVar5 = 0x1b37e6bf, iVar3 != 0x2076392d)) &&
           (iVar5 = iVar3, iVar3 == 0x23233d1a)) {
          local_70 = &PTR___NSConcreteGlobalBlock_000687f0;
          iVar5 = -0x1a959404;
        }
      }
      else {
        if (iVar3 < 0x295485c1) {
          iVar4 = 0x284437d0;
          iVar5 = 0x572417f4;
          bVar1 = iVar3 == 0x28f50cc5;
          iVar6 = -0x5e0c6828;
          goto LAB_000509ec;
        }
        if (iVar3 == 0x295485c1) {
          local_68 = DAT_000a4120;
          iVar5 = 0x5b378b34;
        }
        else {
          iVar5 = 0x295485c1;
          if (iVar3 != 0x31c33b15) {
            iVar5 = iVar3;
          }
        }
      }
    }
    else if (iVar3 < 0x5b378b34) {
      if (iVar3 < 0x4ce4d153) {
        if (iVar3 < 0x4743b340) {
          iVar5 = -0x69156c46;
          if ((iVar3 != 0x37fc6631) && (iVar5 = iVar3, iVar3 == 0x3840fc73)) {
            return;
          }
        }
        else if (iVar3 == 0x4743b340) {
          uVar2 = _imp_implementationWithBlock(local_70,local_70);
          _MSHookMessageEx(local_80,local_78,uVar2,&DAT_000a41a8);
          _objc_release(local_70);
          iVar5 = 0x6c606751;
        }
        else {
          iVar5 = iVar3;
          if (iVar3 == 0x48d0c140) {
            iVar5 = 0x56f3cf1f;
          }
        }
      }
      else if (iVar3 < 0x56f3cf1f) {
        if (iVar3 == 0x4ce4d153) {
          local_80 = _objc_msgSend(param_3,"class");
          local_78 = "captureOutput:didOutputMetadataObjects:fromConnection:";
          iVar5 = -0x266b7911;
        }
        else {
          iVar5 = iVar3;
          if (iVar3 == 0x51eb87f9) {
            (*local_98)(param_1,param_2,param_3,param_4);
            iVar5 = 0x284437d0;
          }
        }
      }
      else if (iVar3 == 0x56f3cf1f) {
        local_81 = local_90 == 0;
        iVar5 = -0x2e5ec8f9;
      }
      else {
        iVar5 = 0x7debfe70;
        if (iVar3 != 0x572417f4) {
          iVar5 = iVar3;
        }
      }
    }
    else if (iVar3 < 0x6c606751) {
      if (iVar3 == 0x5b378b34) {
        iVar5 = 0x1ebf4e8a;
      }
      else if (iVar3 == 0x5b9ddb30) {
        iVar5 = -0x4b688d15;
      }
      else {
        iVar5 = iVar3;
        if (iVar3 == 0x60e3a4f8) {
          _objc_release(param_3);
          iVar5 = -0x683cb2c2;
        }
      }
    }
    else if (iVar3 < 0x7bdd2b03) {
      if (iVar3 == 0x6c606751) {
        uVar2 = _imp_implementationWithBlock(local_70,local_70);
        _MSHookMessageEx(local_80,local_78,uVar2,&DAT_000a41a8);
        _objc_release(local_70);
        iVar5 = -0x49f1bae;
      }
      else if (iVar3 != 0x711c811c) {
        iVar5 = iVar3;
      }
    }
    else if (iVar3 == 0x7bdd2b03) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      iVar5 = 0x1b37e6bf;
    }
    else {
      iVar5 = -0xe54011d;
      if (iVar3 != 0x7debfe70) {
        iVar5 = iVar3;
      }
    }
  }
  if (iVar3 < -0x2aaed15d) {
    if (iVar3 < -0x5fb1a6fe) {
      iVar5 = -0x65f8bf09;
      if (iVar3 < -0x683cb2c2) {
        if (iVar3 == -0x7d730e3c) {
          iVar5 = 0x1e27c5a4;
          if (local_99 == '\0') {
            iVar5 = -0x4a23aea3;
          }
        }
        else {
          iVar6 = 0xbec9486;
          if (iVar3 != -0x69156c46) {
            iVar6 = iVar3;
          }
          if (iVar3 != -0x7778fff2) {
            iVar5 = iVar6;
          }
        }
      }
      else {
        if (iVar3 < -0x65f8bf09) {
          iVar4 = -0x683cb2c2;
          iVar5 = 0x3840fc73;
          bVar1 = iVar3 == -0x668b81d9;
          iVar6 = 0x51eb87f9;
          goto LAB_000509ec;
        }
        if (iVar3 == -0x65f8bf09) {
          local_99 = param_3 == 0 || param_4 == 0;
          iVar5 = -0x7d730e3c;
        }
        else if (iVar3 != -0x62e7a468) {
          iVar5 = iVar3;
        }
      }
      goto LAB_000506f4;
    }
    if (iVar3 < -0x4b2c617a) {
      iVar5 = 0x7debfe70;
      if (iVar3 != -0x5fb1a6fe) {
        if (iVar3 == -0x5e0c6828) {
          local_98 = DAT_000a4120;
          iVar5 = -0x40a62cd;
        }
        else {
          iVar5 = 0x2076392d;
          if (iVar3 != -0x4b688d15) {
            iVar5 = iVar3;
          }
        }
      }
      goto LAB_000506f4;
    }
    if (iVar3 < -0x2e5ec8f9) {
      iVar5 = 0x60e3a4f8;
      if ((iVar3 != -0x4b2c617a) && (iVar5 = iVar3, iVar3 == -0x4a23aea3)) {
        local_90 = DAT_000a41a8;
        iVar5 = -0x2aaed15d;
      }
      goto LAB_000506f4;
    }
    iVar4 = -0x2e5ec8f9;
    iVar5 = 0x1d0c5e11;
    iVar6 = 0x295485c1;
    if (iVar3 != -0x2b01f2a0) {
      iVar6 = iVar3;
    }
  }
  else {
    if (iVar3 < -0xe54011d) {
      if (iVar3 < -0x1cb227a6) {
        iVar5 = 0x56f3cf1f;
        if (iVar3 != -0x2aaed15d) {
          if (iVar3 == -0x29747c0c) {
            _objc_release(local_a8);
            iVar5 = -0x4b2c617a;
          }
          else {
            iVar5 = 0x23233d1a;
            if (iVar3 != -0x266b7911) {
              iVar5 = iVar3;
            }
          }
        }
      }
      else if (iVar3 < -0x18d48f16) {
        iVar6 = -0x1cb227a6;
        if (iVar3 != -0x1a959404) {
          iVar6 = iVar3;
        }
        iVar5 = 0x6c606751;
        if (iVar3 != -0x1cb227a6) {
          iVar5 = iVar6;
        }
      }
      else if (iVar3 == -0x18d48f16) {
        iVar5 = -0x7778fff2;
      }
      else {
        iVar5 = iVar3;
        if ((iVar3 == -0x10e8dd6b) && (iVar5 = 0x4ce4d153, local_81 == '\0')) {
          iVar5 = -0x2b01f2a0;
        }
      }
      goto LAB_000506f4;
    }
    iVar5 = -0x29747c0c;
    if (iVar3 < -0x3b41c1e) {
      iVar6 = -0x668b81d9;
      if (iVar3 != -0x40a62cd) {
        iVar6 = iVar3;
      }
      iVar4 = -0x2b01f2a0;
      if (iVar3 != -0x49f1bae) {
        iVar4 = iVar6;
      }
      if (iVar3 != -0xe54011d) {
        iVar5 = iVar4;
      }
      goto LAB_000506f4;
    }
    if (0x826e3d6 < iVar3) {
      if (iVar3 == 0x826e3d7) {
        _objc_release(param_3);
        iVar5 = 0x60e3a4f8;
      }
      else if (iVar3 != 0xbec9486) {
        iVar5 = iVar3;
      }
      goto LAB_000506f4;
    }
    iVar4 = -0x3b41c1e;
    iVar5 = -0x10e8dd6b;
    bVar1 = iVar3 == 0x1ff6228;
    iVar6 = -0x69156c46;
LAB_000509ec:
    if (!bVar1) {
      iVar6 = iVar3;
    }
  }
  if (iVar3 != iVar4) {
    iVar5 = iVar6;
  }
  goto LAB_000506f4;
}



void FUN_00050f90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0x4d98e3c0;
  do {
    while( true ) {
      while (iVar4 = iVar1, iVar4 < -0x3eae73a5) {
        iVar2 = -0xd8be78;
        if (iVar4 != -0x61c820ca) {
          iVar2 = iVar4;
        }
        iVar1 = -0x61c820ca;
        if (iVar4 != -0x63b1ff5c) {
          iVar1 = iVar2;
        }
        iVar2 = -0x4e43f5c;
        if (iVar4 != -0x6f17565e) {
          iVar2 = iVar4;
        }
        iVar3 = -0x3eae73a5;
        if (iVar4 != -0x7310aa57) {
          iVar3 = iVar2;
        }
        if (iVar4 < -0x63b1ff5c) {
          iVar1 = iVar3;
        }
      }
      if (-0xd8be79 < iVar4) break;
      if (iVar4 == -0x3eae73a5) {
        iVar1 = -0x6f17565e;
      }
      else {
        iVar1 = iVar4;
        if (iVar4 == -0x4e43f5c) {
          _AudioServicesPlaySystemSound(0x5f0);
          _ui_selectVideo();
          iVar1 = 0x30dd41d1;
        }
      }
    }
    iVar1 = -0x61c820ca;
  } while (((iVar4 == 0x30dd41d1) || (iVar1 = -0x3eae73a5, iVar4 == 0x4d98e3c0)) ||
          (iVar1 = iVar4, iVar4 != -0xd8be78));
  return;
}



void FUN_000510d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  char local_91;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar3 = -0x3677d98b;
  do {
    while( true ) {
      while( true ) {
        while (iVar1 = iVar3, iVar3 = iVar1, iVar1 < 0xf50f8f3) {
          if (iVar1 < -0x2ac4a0b8) {
            if (iVar1 < -0x494c195a) {
              if (iVar1 < -0x5ea9f4ec) {
                iVar2 = 0x669323cc;
                if (iVar1 != -0x5f6a8bc5) {
                  iVar2 = iVar1;
                }
                iVar3 = 0x323a388c;
                if (iVar1 != -0x78e0631e) {
                  iVar3 = iVar2;
                }
              }
              else if (iVar1 == -0x5ea9f4ec) {
                local_91 = _objc_msgSend(local_b0,local_a0,local_a8);
                iVar3 = -0x4005c7a0;
              }
              else {
                iVar3 = 0x306f4da3;
                if (iVar1 != -0x570a0da9) {
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar1 < -0x4005c7a0) {
              if (iVar1 == -0x494c195a) {
                iVar3 = -0x570a0da9;
                if (local_91 == '\0') {
                  iVar3 = -0x5f6a8bc5;
                }
              }
              else if (iVar1 == -0x424eea12) {
                _AudioServicesPlaySystemSound(0x5f1);
                iVar3 = 0x735d4a6c;
              }
            }
            else if (iVar1 == -0x4005c7a0) {
              iVar3 = -0x494c195a;
            }
            else {
              iVar3 = 0x7fc7a659;
              if ((iVar1 != -0x3677d98b) && (iVar3 = iVar1, iVar1 == -0x2d3dcfc3)) {
                _objc_msgSend(local_70,
                              "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                              local_68,1,0,0);
                iVar3 = 0x1e445201;
              }
            }
          }
          else if (iVar1 < -0x1c94f014) {
            if (iVar1 < -0x227fa097) {
              if (iVar1 == -0x2ac4a0b8) {
                local_78 = local_90;
                local_80 = "removeItemAtPath:error:";
                iVar3 = 0x67a3cf1e;
              }
              else {
                iVar3 = 0x2c55086d;
                if (iVar1 != -0x2a12064d) {
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar1 == -0x227fa097) {
              _objc_msgSend(local_b0,local_a0,local_a8);
              iVar3 = -0x5ea9f4ec;
            }
            else {
              iVar3 = -0x5222663;
              if (iVar1 != -0x2191e729) {
                iVar3 = iVar1;
              }
            }
          }
          else if (iVar1 < -0x13093064) {
            iVar2 = -0x5ea9f4ec;
            if (iVar1 != -0x15cfde90) {
              iVar2 = iVar1;
            }
            iVar3 = 0x735d4a6c;
            if (iVar1 != -0x1c94f014) {
              iVar3 = iVar2;
            }
          }
          else if (iVar1 == -0x13093064) {
            iVar3 = 0x682d4842;
          }
          else {
            iVar3 = 0x323a388c;
            if ((iVar1 != -0x5222663) && (iVar3 = iVar1, iVar1 == -0x67d3330)) {
              return;
            }
          }
        }
        if (iVar1 < 0x438e736f) break;
        if (iVar1 < 0x682d4842) {
          if (iVar1 < 0x669323cc) {
            iVar2 = -0x2ac4a0b8;
            if (iVar1 != 0x5d3f2e25) {
              iVar2 = iVar1;
            }
            iVar3 = -0x1c94f014;
            if (iVar1 != 0x438e736f) {
              iVar3 = iVar2;
            }
          }
          else if (iVar1 == 0x669323cc) {
            local_70 = DAT_000a4070;
            local_68 = _g_isMirroredMarkxz;
            iVar3 = -0x13093064;
          }
          else if (iVar1 == 0x67a3cf1e) {
            _objc_msgSend(local_78,local_80,local_88,0);
            iVar3 = -0x1c94f014;
          }
        }
        else if (iVar1 < 0x733509cf) {
          iVar2 = 0x669323cc;
          if (iVar1 != 0x6cfde338) {
            iVar2 = iVar1;
          }
          iVar3 = -0x2d3dcfc3;
          if (iVar1 != 0x682d4842) {
            iVar3 = iVar2;
          }
        }
        else {
          iVar3 = 0x306f4da3;
          if (iVar1 != 0x733509cf) {
            if (iVar1 == 0x735d4a6c) {
              _AudioServicesPlaySystemSound(0x5f1);
              iVar3 = -0x2191e729;
            }
            else {
              iVar3 = iVar1;
              if (iVar1 == 0x7fc7a659) {
                _AudioServicesPlaySystemSound(0x5f1);
                local_b0 = DAT_000a4070;
                local_a8 = _g_isMirroredMarkxz;
                local_a0 = "fileExistsAtPath:";
                iVar3 = 0xf50f8f3;
              }
            }
          }
        }
      }
      if (0x2e1fcda2 < iVar1) break;
      if (iVar1 < 0x1e445201) {
        if (iVar1 == 0xf50f8f3) {
          iVar3 = -0x15cfde90;
        }
        else if (iVar1 == 0xfb723b8) {
          _objc_msgSend(local_70,
                        "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                        local_68,1,0,0);
          iVar3 = -0x2d3dcfc3;
        }
      }
      else {
        iVar2 = 0x1e445201;
        iVar3 = 0x3e073530;
        iVar4 = 0x438e736f;
        if (iVar1 != 0x2c55086d) {
          iVar4 = iVar1;
        }
LAB_000515bc:
        if (iVar1 != iVar2) {
          iVar3 = iVar4;
        }
      }
    }
    if (0x323a388b < iVar1) {
      iVar2 = 0x323a388c;
      iVar3 = -0x67d3330;
      iVar4 = 0x2c55086d;
      if (iVar1 != 0x3e073530) {
        iVar4 = iVar1;
      }
      goto LAB_000515bc;
    }
    if (iVar1 == 0x2e1fcda3) {
      _AudioServicesPlaySystemSound(0x5f1);
      iVar3 = 0x7fc7a659;
    }
    else if (iVar1 == 0x306f4da3) {
      local_90 = DAT_000a4070;
      local_88 = _g_isMirroredMarkxz;
      iVar3 = 0x5d3f2e25;
    }
  } while( true );
}



void FUN_000516c4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  iVar1 = -0x564d521d;
  do {
    while( true ) {
      while( true ) {
        while (iVar7 = iVar1, iVar7 < 0x60460dd) {
          iVar2 = -0x11dc8705;
          if (iVar7 != -0xd5c9c18) {
            iVar2 = iVar7;
          }
          iVar1 = 0x14e275c8;
          if (iVar7 != -0x11dc8705) {
            iVar1 = iVar2;
          }
          iVar2 = 0xcd05f9e;
          if (iVar7 != -0x3d478a4d) {
            iVar2 = iVar7;
          }
          iVar3 = 0xa94c49c;
          if (iVar7 != -0x564d521d) {
            iVar3 = iVar2;
          }
          if (iVar7 < -0x11dc8705) {
            iVar1 = iVar3;
          }
        }
        if (0xcd05f9d < iVar7) break;
        if (iVar7 == 0x60460dd) {
          _objc_retain(local_68);
          _objc_msgSend(local_68,"rootViewController");
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_release(local_68);
          _objc_release(local_70);
          _objc_msgSend(uVar4,"dismissViewControllerAnimated:completion:",1,0);
          _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_prefs_root_w2Pro);
          _objc_retainAutoreleasedReturnValue();
          iVar1 = 0x14e275c8;
        }
        else {
          iVar1 = iVar7;
          if (iVar7 == 0xa94c49c) {
            local_70 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
            _objc_retain(local_70);
            local_68 = _objc_msgSend(local_70,"keyWindow");
            iVar1 = -0xd5c9c18;
          }
        }
      }
      if (iVar7 != 0x14e275c8) break;
      _objc_retain(local_68);
      local_60 = _objc_msgSend(local_68,"rootViewController");
      _objc_retain(local_60);
      _objc_release(local_68);
      _objc_release(local_70);
      _objc_msgSend(local_60,"dismissViewControllerAnimated:completion:",1,0);
      local_58 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_prefs_root_w2Pro);
      _objc_retain(local_58);
      iVar1 = -0x3d478a4d;
    }
    iVar1 = 0xa94c49c;
  } while ((iVar7 == 0x343dbdf6) || (iVar1 = iVar7, iVar7 != 0xcd05f9e));
  _objc_msgSend(&_OBJC_CLASS___NSCharacterSet,"URLFragmentAllowedCharacterSet");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(local_58,"stringByAddingPercentEncodingWithAllowedCharacters:",uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  FUN_0005e1d8(uVar6);
  _objc_release(uVar6);
  _objc_release(local_58);
  _objc_release(local_60);
  return;
}



void FUN_000519dc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  dispatch_time_t dVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 auStack_360 [8];
  char *local_358;
  char *local_350;
  char *local_348;
  char *local_340;
  char *local_338;
  char *local_330;
  char *local_328;
  char *local_320;
  char *local_318;
  char *local_310;
  char *local_308;
  char *local_300;
  char *local_2f8;
  undefined8 *local_2f0;
  char *local_2e8;
  undefined8 local_2e0;
  char *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  char local_2a1;
  undefined8 local_2a0;
  undefined8 local_298;
  char local_289;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  char *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  undefined8 local_218;
  char *local_210;
  undefined8 local_208;
  char *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  char local_1d9;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  char local_119;
  undefined8 local_118;
  char local_109;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar3 = (undefined8 *)auStack_360;
  local_300 = "dismissViewControllerAnimated:completion:";
  local_2f8 = "presentViewController:animated:completion:";
  local_310 = "sharedApplication";
  local_308 = "stringWithFormat:";
  local_320 = "rootViewController";
  local_318 = "keyWindow";
  local_330 = "stringByAppendingPathComponent:";
  local_328 = "firstObject";
  local_340 = "alertControllerWithTitle:message:preferredStyle:";
  local_338 = "fileExistsAtPath:";
  local_350 = "objectForKey:";
  local_348 = "infoDictionary";
  local_358 = "objectForInfoDictionaryKey:";
  iVar9 = -0x65a1b8b1;
LAB_00051a9c:
  while( true ) {
    while (iVar4 = iVar9, iVar9 = iVar4, iVar4 < -0x115c28af) {
      if (iVar4 < -0x479fd28a) {
        if (iVar4 < -0x674b5d4e) {
          if (iVar4 < -0x75294fdf) {
            if (iVar4 < -0x79e879de) {
              if (iVar4 < -0x7ef9fe24) {
                if (iVar4 == -0x7fdfb670) {
                  _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
                  iVar9 = -0x379ddaee;
                }
                else if (iVar4 == -0x7f7797e7) {
                  iVar9 = -0x4ba72286;
                }
              }
              else if (iVar4 == -0x7ef9fe24) {
                local_280 = _g_tempFilestep2;
                iVar9 = -0x170e40a6;
              }
              else if (iVar4 == -0x7a2d2a63) {
                local_289 = _objc_msgSend(local_298,local_2b0,local_2a0);
                iVar9 = 0x43fafcae;
              }
              else if (iVar4 == -0x79f38b65) {
                iVar9 = 0x2a9ac93c;
              }
            }
            else if (iVar4 < -0x77aacc4a) {
              iVar9 = -0x4132e261;
              if (iVar4 != -0x79e879de) {
                if (iVar4 == -0x792d5d9e) {
                  _objc_retain(local_d8);
                  iVar9 = -0x5d0f8a7b;
                }
                else {
                  iVar9 = iVar4;
                  if (iVar4 == -0x782d3aeb) {
                    _objc_retain(local_1b8);
                    _objc_msgSend(local_1b8,local_210);
                    uVar8 = _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(uVar8,local_200,&cf__w2avfictitiousCaches_mov);
                    _objc_retainAutoreleasedReturnValue();
                    iVar9 = -0x191a859b;
                  }
                }
              }
            }
            else if (iVar4 == -0x77aacc4a) {
              iVar4 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isenabledw2ProChinese);
              unaff_x28 = local_98;
              iVar9 = -0x498e7a96;
              if (iVar4 == 0) {
                iVar9 = 0x1856c28d;
              }
            }
            else if (iVar4 == -0x76bc34bf) {
              iVar9 = 0x63ae54ec;
            }
            else if (iVar4 == -0x75c25cd0) {
              iVar9 = 0x39a3bc60;
              if (local_2a1 == '\0') {
                iVar9 = -0x65d37cfd;
              }
            }
          }
          else if (iVar4 < -0x70e8286a) {
            if (iVar4 < -0x733011e9) {
              if (iVar4 == -0x75294fdf) {
                unaff_x25 = local_130;
                iVar9 = -0x4e391623;
                if (local_119 == '\0') {
                  iVar9 = 0x7000249f;
                }
              }
              else if (iVar4 == -0x7487cfa7) {
                _NSSearchPathForDirectoriesInDomains(0xd,1,1);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_210);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_200,&cf__w2avfictitiousCaches_mov);
                _objc_retainAutoreleasedReturnValue();
                iVar9 = -0x14577964;
              }
              else if (iVar4 == -0x7441dd76) {
                iVar9 = -0x2b5afc75;
              }
            }
            else {
              iVar9 = 0x130b845f;
              if (((iVar4 != -0x733011e9) && (iVar9 = -0x378f88c5, iVar4 != -0x7308cd12)) &&
                 (iVar9 = iVar4, iVar4 == -0x71610231)) {
                iVar9 = -0x733011e9;
              }
            }
          }
          else if (iVar4 < -0x6eeb2d60) {
            if (iVar4 == -0x70e8286a) {
              _objc_release(local_f8);
              local_e8 = DAT_000a4070;
              local_f0 = _g_isenabledw2ProChinese;
              iVar9 = 0x142dcf49;
            }
            else if (iVar4 == -0x704a3c6a) {
              local_1d8 = DAT_000a4070;
              local_1d0 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              _objc_retain(local_1d0);
              local_1c8 = _objc_msgSend(local_1d0,local_210);
              iVar9 = 0x6fdce022;
            }
            else if (iVar4 == -0x6ffa2372) {
              unaff_x27 = local_d0;
              iVar9 = 0xa911b26;
            }
          }
          else {
            iVar9 = -0x7ef9fe24;
            if (iVar4 != -0x6eeb2d60) {
              if (iVar4 == -0x69a3dbfb) {
                iVar9 = -0x77aacc4a;
              }
              else {
                iVar9 = iVar4;
                if (iVar4 == -0x693c32db) {
                  uVar8 = DAT_000a4070;
                  local_218 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
                  _objc_retain(local_218);
                  local_210 = local_328;
                  local_208 = _objc_msgSend(local_218,local_328);
                  _objc_retain(local_208);
                  local_200 = local_330;
                  local_1f8 = _objc_msgSend(local_208,local_330,&cf__w2avfictitious_mov);
                  local_1f0 = local_1f8;
                  _objc_retain(local_1f8);
                  local_1e8 = uVar8;
                  iVar9 = -0x44f10d0f;
                }
              }
            }
          }
        }
        else if (iVar4 < -0x586f6de5) {
          if (iVar4 < -0x6183d047) {
            if (iVar4 < -0x65a1b8b1) {
              iVar9 = 0x21c3ddb7;
              if ((iVar4 != -0x674b5d4e) && (iVar9 = iVar4, iVar4 == -0x65d37cfd)) {
                iVar9 = -0x693c32db;
              }
            }
            else {
              iVar9 = -0x62127477;
              if (((iVar4 != -0x65a1b8b1) && (iVar9 = -0x14577964, iVar4 != -0x6481ab51)) &&
                 (iVar9 = iVar4, iVar4 == -0x62127477)) {
                puVar3 = puVar3 + -6;
                local_2e8 = "mainBundle";
                local_2f0 = puVar3;
                local_2e0 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
                _objc_retain(local_2e0);
                local_2d8 = local_358;
                iVar9 = 0x1b9a4de3;
              }
            }
          }
          else if (iVar4 < -0x5d0f8a7b) {
            iVar9 = -0x378f88c5;
            if (((iVar4 != -0x6183d047) && (iVar9 = -0x432c25b0, iVar4 != -0x6006fd55)) &&
               (iVar9 = iVar4, iVar4 == -0x5da8e6dd)) {
              local_2d0 = _objc_msgSend(local_2e0,local_2d8,&cf_CFBundleDisplayName);
              _objc_retain(local_2d0);
              local_2c8 = local_2d0;
              _objc_release(local_2e0);
              _objc_msgSend(&_OBJC_CLASS___NSBundle,local_2e8);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,local_348);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              local_2c0 = _objc_msgSend(uVar5,local_350,&cf_CFBundleIdentifier);
              _objc_retain(local_2c0);
              local_2b8 = local_2c0;
              _objc_release(uVar5);
              _objc_release(uVar8);
              _AudioServicesPlaySystemSound(0x5f1);
              iVar9 = -0x3c535c72;
            }
          }
          else if (iVar4 == -0x5d0f8a7b) {
            _objc_retain(local_d8);
            local_d0 = local_d8;
            iVar9 = -0x71610231;
          }
          else {
            iVar9 = -0xda04e3c;
            if ((iVar4 != -0x5c9eba14) && (iVar9 = iVar4, iVar4 == -0x5bcfd795)) {
              iVar9 = -0x6eeb2d60;
            }
          }
        }
        else if (iVar4 < -0x4dca9db1) {
          if (iVar4 < -0x52652785) {
            if (iVar4 == -0x586f6de5) {
              iVar9 = -0x6183d047;
              if (local_289 == '\0') {
                iVar9 = 0x398f3503;
              }
            }
            else {
              iVar9 = 0x7d119aca;
              if ((iVar4 != -0x554df0e1) && (iVar9 = iVar4, iVar4 == -0x533a969d)) {
                iVar9 = -0x3e48b910;
              }
            }
          }
          else if (iVar4 == -0x52652785) {
            iVar9 = -0x133ecca8;
          }
          else {
            iVar9 = 0xc0c6a15;
            if ((iVar4 != -0x4ff51c11) && (iVar9 = iVar4, iVar4 == -0x4e391623)) {
              local_80 = unaff_x25;
              iVar9 = -0x379ddaee;
            }
          }
        }
        else if (iVar4 < -0x49f96f7e) {
          if (iVar4 == -0x4dca9db1) {
            _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
            _objc_retainAutoreleasedReturnValue();
            iVar9 = -0x62127477;
          }
          else {
            iVar9 = 0x6d138715;
            if ((iVar4 != -0x4bfba202) && (iVar9 = iVar4, iVar4 == -0x4ba72286)) {
              _objc_release(local_1d0);
              iVar9 = -0x61d9417;
            }
          }
        }
        else {
          iVar9 = 0x1d125e40;
          if (iVar4 != -0x49f96f7e) {
            if (iVar4 == -0x498e7a96) {
              local_70 = unaff_x28;
              iVar9 = 0x3481b2fd;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == -0x494029dd) {
                _objc_msgSend(&_OBJC_CLASS___UIApplication,local_170);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_160);
                uVar5 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar5,local_150);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar6,local_2f8,local_70,1,0);
                _objc_release(uVar6);
                _objc_release(uVar5);
                _objc_release(uVar8);
                dVar7 = _dispatch_time(0,2500000000);
                *local_2f0 = PTR___NSConcreteStackBlock_00068030;
                *(undefined4 *)(local_2f0 + 1) = 0xc2000000;
                *(undefined4 *)((long)local_2f0 + 0xc) = 0;
                local_2f0[2] = FUN_0005ec40;
                local_2f0[3] = &DAT_00068360;
                uVar8 = local_70;
                puVar1 = local_2f0;
                local_2f0[4] = local_70;
                puVar2 = local_2f0;
                uVar8 = _objc_retain(uVar8);
                _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,puVar2);
                _objc_release(puVar1[4]);
                _objc_release(uVar8);
                _objc_release(local_78);
                _objc_release(local_148);
                _objc_release(local_2c0);
                _objc_release(local_2d0);
                iVar9 = 0x3481b2fd;
              }
            }
          }
        }
      }
      else if (iVar4 < -0x2b8afed9) {
        if (iVar4 < -0x3c535c72) {
          if (iVar4 < -0x432c25b0) {
            if (iVar4 < -0x46f437e5) {
              if (iVar4 == -0x479fd28a) {
                _objc_msgSend(&_OBJC_CLASS___UIApplication,local_310);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_318);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_320);
                iVar9 = -0x1661e16a;
              }
              else if (iVar4 == -0x47610e33) {
                puVar3[-2] = local_2b8;
                puVar3[-1] = local_2c8;
                _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_____Virtualfilesdeleted);
                iVar9 = 0x58b65401;
              }
              else if (iVar4 == -0x46fea8c8) {
                iVar9 = -0x52652785;
              }
            }
            else if (iVar4 == -0x46f437e5) {
              local_119 = _objc_msgSend(local_128,local_2b0,_g_isenabledw2ProChinese);
              iVar9 = -0x75294fdf;
            }
            else if (iVar4 == -0x45d315a8) {
              _objc_msgSend(local_198,"removeItemAtPath:error:",local_180,0);
              _objc_release(local_178);
              _objc_release(local_188);
              _objc_release(local_190);
              iVar9 = 0x38ebf63e;
            }
            else if (iVar4 == -0x44f10d0f) {
              iVar9 = -0x2c01de53;
            }
          }
          else if (iVar4 < -0x4132e261) {
            if (iVar4 == -0x432c25b0) {
              puVar3[-2] = local_2b8;
              puVar3[-1] = local_2c8;
              local_108 = _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_newline_s_);
              _objc_retain(local_108);
              local_100 = local_108;
              local_f8 = local_80;
              iVar9 = -0x7441dd76;
            }
            else if (iVar4 == -0x421fae59) {
              _objc_release(local_208);
              _objc_release(local_218);
              iVar9 = 0x5de97264;
              if (local_1d9 == '\0') {
                iVar9 = 0x6fe98bd2;
              }
            }
            else if (iVar4 == -0x41da3475) {
              _objc_msgSend(local_128,local_2b0,_g_isenabledw2ProChinese);
              goto LAB_00053298;
            }
          }
          else if (iVar4 == -0x4132e261) {
            local_d9 = _objc_msgSend(local_e8,local_2b0,local_f0);
            iVar9 = -0x13cccbb9;
          }
          else {
            iVar9 = -0x52652785;
            if ((iVar4 != -0x3e48b910) && (iVar9 = iVar4, iVar4 == -0x3df94c9e)) {
              return;
            }
          }
        }
        else if (iVar4 < -0x33eda65c) {
          if (iVar4 < -0x378f88c5) {
            iVar9 = 0x2fe1cf3a;
            if (iVar4 != -0x3c535c72) {
              if (iVar4 == -0x39a9e406) {
                _objc_release(local_a0,local_b8);
                iVar9 = -0x270358e4;
              }
              else {
                iVar9 = iVar4;
                if (iVar4 == -0x379ddaee) {
                  local_109 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
                  iVar9 = -0x15fde445;
                }
              }
            }
          }
          else if (iVar4 == -0x378f88c5) {
            local_288 = DAT_000a4070;
            iVar9 = -0x5bcfd795;
          }
          else {
            iVar9 = 0xc0c6a15;
            if ((iVar4 != -0x3686c312) && (iVar9 = iVar4, iVar4 == -0x357b4876)) {
              iVar9 = 0x7dd1268f;
            }
          }
        }
        else if (iVar4 < -0x2ce64e3b) {
          if (iVar4 == -0x33eda65c) {
            iVar9 = -0x421fae59;
          }
          else if (iVar4 == -0x3375271c) {
            iVar9 = -0x115c28af;
          }
          else if (iVar4 == -0x2d45fa68) {
            iVar9 = 0x487476b7;
          }
        }
        else if (iVar4 == -0x2ce64e3b) {
          iVar9 = 0x6d138715;
        }
        else if (iVar4 == -0x2c7239c7) {
          iVar9 = 0x683c7d88;
        }
        else if (iVar4 == -0x2c01de53) {
          iVar9 = 0x69ea1a63;
        }
      }
      else if (iVar4 < -0x20731938) {
        if (iVar4 < -0x29c8320c) {
          if (iVar4 < -0x2b5b72d1) {
            if (iVar4 == -0x2b8afed9) {
              _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_GlobalVirtualFilesdeleted);
              local_118 = _objc_retainAutoreleasedReturnValue();
              iVar9 = 0x3d215df0;
            }
            else {
              iVar9 = 0x56bb6386;
              if (iVar4 != -0x2b75ddfa) {
                iVar9 = iVar4;
              }
            }
          }
          else if (iVar4 == -0x2b5b72d1) {
            iVar4 = _objc_msgSend(local_268,local_2b0,local_270);
            iVar9 = 0x58013e23;
            if (iVar4 == 0) {
              iVar9 = -0x21bf8482;
            }
          }
          else {
            iVar9 = -0x70e8286a;
            if ((iVar4 != -0x2b5afc75) && (iVar9 = iVar4, iVar4 == -0x29f7f384)) {
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,local_328);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,local_330,&cf__w2avfictitious_mov);
              _objc_retainAutoreleasedReturnValue();
              iVar9 = -0x693c32db;
            }
          }
        }
        else if (iVar4 < -0x243e582c) {
          iVar9 = 0xa1c975f;
          if (((iVar4 != -0x29c8320c) && (iVar9 = 0x693aee93, iVar4 != -0x292a1313)) &&
             (iVar9 = iVar4, iVar4 == -0x270358e4)) {
            local_98 = local_a0;
            _objc_release(local_b8);
            iVar9 = -0x69a3dbfb;
          }
        }
        else if (iVar4 == -0x243e582c) {
          _objc_release(local_138);
          iVar9 = -0x533a969d;
        }
        else if (iVar4 == -0x2308f3ba) {
          _objc_msgSend(local_248,local_250,local_258,0);
          iVar9 = -0x21bf8482;
        }
        else if (iVar4 == -0x21bf8482) {
          iVar9 = 0x5c3072b1;
        }
      }
      else if (iVar4 < -0x15fde445) {
        if (iVar4 < -0x170e40a6) {
          iVar9 = -0x5d0f8a7b;
          if (iVar4 != -0x20731938) {
            if (iVar4 == -0x191a859b) {
              _objc_retain(local_1b8);
              local_1b0 = _objc_msgSend(local_1b8,local_210);
              _objc_retain(local_1b0);
              local_1a8 = _objc_msgSend(local_1b0,local_1b0,local_200,&cf__w2avfictitiousCaches_mov)
              ;
              local_1a0 = local_1a8;
              _objc_retain(local_1a8);
              iVar9 = 0x7776f7fc;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == -0x1918778a) {
                iVar9 = 0x34d892f2;
              }
            }
          }
        }
        else if (iVar4 == -0x170e40a6) {
          iVar9 = 0x5abb111f;
        }
        else if (iVar4 == -0x17086855) {
          _objc_release(local_c0);
          _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
          iVar9 = 0x14534c95;
        }
        else if (iVar4 == -0x1661e16a) {
          local_170 = local_310;
          local_168 = _objc_msgSend(&_OBJC_CLASS___UIApplication,local_310);
          _objc_retain(local_168);
          local_160 = local_318;
          local_158 = _objc_msgSend(local_168,local_318);
          _objc_retain(local_158);
          local_150 = local_320;
          local_148 = _objc_msgSend(local_158,local_320);
          iVar9 = 0x53763759;
        }
      }
      else if (iVar4 < -0x133ecca8) {
        if (iVar4 == -0x15fde445) {
          unaff_x27 = local_80;
          iVar9 = 0xa911b26;
          if (local_109 == '\0') {
            iVar9 = -0x6006fd55;
          }
        }
        else if (iVar4 == -0x14577964) {
          local_190 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_190);
          local_188 = _objc_msgSend(local_190,local_210);
          _objc_retain(local_188);
          local_180 = _objc_msgSend(local_188,local_188,local_200,&cf__w2avfictitiousCaches_mov);
          local_178 = local_180;
          _objc_retain(local_180);
          iVar9 = -0x12bf9981;
        }
        else if (iVar4 == -0x13cccbb9) {
          unaff_x27 = local_100;
          iVar9 = 0xa911b26;
          if (local_d9 == '\0') {
            iVar9 = 0x4150d8c7;
          }
        }
      }
      else if (iVar4 == -0x133ecca8) {
        unaff_x25 = local_118;
        iVar9 = -0x4e391623;
      }
      else if (iVar4 == -0x12bf9981) {
        iVar9 = -0x45d315a8;
      }
      else if (iVar4 == -0x122a060d) {
        iVar9 = 0x6ddc2fa2;
      }
    }
    if (0x424323d5 < iVar4) break;
    if (iVar4 < 0x1d29f321) {
      if (iVar4 < 0x9ff8359) {
        if (iVar4 < -0x80cd9c5) {
          if (iVar4 < -0xd046398) {
            iVar9 = -0x270358e4;
            if ((iVar4 != -0x115c28af) && (iVar9 = iVar4, iVar4 == -0xda04e3c)) {
              local_278 = DAT_000a4070;
              local_270 = _g_tempFile;
              iVar9 = 0x6c9b8cd0;
            }
          }
          else if (iVar4 == -0xd046398) {
            local_198 = DAT_000a4070;
            iVar9 = -0x6481ab51;
          }
          else if (iVar4 == -0xacd2d47) {
            iVar9 = 0x61ef7441;
          }
          else if (iVar4 == -0x8647737) {
            iVar9 = 0x693aee93;
          }
        }
        else if (iVar4 < -0x450b1a1) {
          iVar9 = 0x398f3503;
          if (((iVar4 != -0x80cd9c5) && (iVar9 = -0x243e582c, iVar4 != -0x7bde1a1)) &&
             (iVar9 = iVar4, iVar4 == -0x61d9417)) {
            iVar9 = 0x6fe98bd2;
          }
        }
        else if (iVar4 == -0x450b1a1) {
          iVar9 = 0x761e1d32;
        }
        else if (iVar4 == 0x62500d4) {
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,local_210);
          iVar9 = -0x704a3c6a;
        }
        else if (iVar4 == 0x7b208d2) {
          local_258 = _g_tempFile;
          local_248 = local_260;
          local_250 = "removeItemAtPath:error:";
          iVar9 = 0x2ccebcd8;
        }
      }
      else if (iVar4 < 0x142dcf49) {
        if (iVar4 < 0xc0c6a15) {
          if (iVar4 == 0x9ff8359) {
            local_268 = local_278;
            iVar9 = -0x2b5b72d1;
          }
          else if (iVar4 == 0xa1c975f) {
            _objc_retain(local_148);
            _objc_release(local_158);
            _objc_release(local_168);
            _objc_msgSend(local_148,local_300,1,0);
            local_140 = local_308;
            local_138 = _objc_msgSend(&_OBJC_CLASS___NSString,local_308,&cf_newline_s_);
            _objc_retain(local_138);
            local_130 = local_138;
            local_128 = DAT_000a4070;
            iVar9 = -0xacd2d47;
          }
          else if (iVar4 == 0xa911b26) {
            local_c8 = local_340;
            local_78 = unaff_x27;
            local_c0 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_340,&cf_w,unaff_x27,1);
            _objc_retain(local_c0);
            unaff_x28 = local_c0;
            iVar4 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isenabledw2ProChinese);
            iVar9 = -0x498e7a96;
            if (iVar4 == 0) {
              iVar9 = 0x39ed6c32;
            }
          }
        }
        else if (iVar4 == 0xc0c6a15) {
          local_238 = _g_tempFilestep;
          iVar9 = -0x357b4876;
        }
        else if (iVar4 == 0xd862d64) {
          _objc_retain(local_148);
          _objc_release(local_158);
          _objc_release(local_168);
          _objc_msgSend(local_148,local_300,1,0);
          _objc_msgSend(&_OBJC_CLASS___NSString,local_308,&cf_newline_s_);
          _objc_retainAutoreleasedReturnValue();
          iVar9 = 0xa1c975f;
        }
        else if (iVar4 == 0x130b845f) {
          _objc_release(local_108);
          iVar9 = -0x6ffa2372;
        }
      }
      else if (iVar4 < 0x1b9a4de3) {
        if (iVar4 == 0x142dcf49) {
          iVar9 = -0x79e879de;
        }
        else if (iVar4 == 0x14534c95) {
          _objc_release(local_c0);
          local_a1 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
          iVar9 = 0x6f6dec2c;
        }
        else if (iVar4 == 0x1856c28d) {
          local_90 = &_OBJC_CLASS___UIAlertController;
          iVar9 = -0x554df0e1;
        }
      }
      else if (iVar4 == 0x1b9a4de3) {
        iVar9 = -0x5da8e6dd;
      }
      else if (iVar4 == 0x1c4ee256) {
        iVar9 = 0x7b208d2;
      }
      else if (iVar4 == 0x1d125e40) {
        _objc_retain(local_1c8);
        _objc_msgSend(local_1c8,local_1c8,local_200,&cf__w2avfictitious_mov);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_1d8,"removeItemAtPath:error:",uVar8,0);
        _objc_release(uVar8);
        _objc_release(local_1c8);
        iVar9 = 0x7e6f05e1;
      }
    }
    else if (iVar4 < 0x2fe1cf3a) {
      if (iVar4 < 0x21c3ddb7) {
        if (iVar4 < 0x1f8ed2bd) {
          if (iVar4 == 0x1d29f321) {
            iVar9 = -0x4ff51c11;
          }
          else if (iVar4 == 0x1f03d5a1) {
            local_1c0 = DAT_000a4070;
            local_1b8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            iVar9 = -0x1918778a;
          }
        }
        else if (iVar4 == 0x1f8ed2bd) {
          _objc_msgSend(local_1e8,local_2b0,local_1f8);
          _objc_release(local_1f0);
          iVar9 = 0x69ea1a63;
        }
        else {
          iVar9 = 0x38ebf63e;
          if ((iVar4 != 0x1fe96fc8) && (iVar9 = iVar4, iVar4 == 0x21780802)) {
            puVar3[-2] = local_2b8;
            puVar3[-1] = local_2c8;
            _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_newline_s_);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = -0x432c25b0;
          }
        }
      }
      else if (iVar4 < 0x2a9ac93c) {
        if (iVar4 == 0x21c3ddb7) {
          local_a0 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w,local_78,1);
          _objc_retain(local_a0);
          iVar9 = -0x3375271c;
        }
        else {
          iVar9 = 0x6ddc2fa2;
          if ((iVar4 != 0x26fdf948) && (iVar9 = iVar4, iVar4 == 0x2985e4f8)) {
            _objc_release(local_138);
            iVar9 = -0x243e582c;
          }
        }
      }
      else if (iVar4 == 0x2a9ac93c) {
        local_298 = DAT_000a4070;
        local_2a0 = _g_tempFilestep2;
        iVar9 = -0x2c7239c7;
      }
      else if (iVar4 == 0x2ccebcd8) {
        iVar9 = -0x2308f3ba;
      }
      else if (iVar4 == 0x2e697176) {
        iVar9 = -0x4bfba202;
      }
    }
    else if (iVar4 < 0x39a3bc60) {
      if (iVar4 < 0x34d892f2) {
        if (iVar4 == 0x2fe1cf3a) {
          local_2b0 = local_338;
          local_2a1 = _objc_msgSend(DAT_000a4070,local_338,_g_isMirroredMarkfbs);
          iVar9 = -0x75c25cd0;
        }
        else if (iVar4 == 0x3308a263) {
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          iVar9 = 0x1f03d5a1;
        }
        else if (iVar4 == 0x3481b2fd) {
          _objc_msgSend(&_OBJC_CLASS___UIApplication,local_170);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,local_160);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,local_150);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,local_2f8,local_70,1,0);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar8);
          dVar7 = _dispatch_time(0,2500000000);
          *local_2f0 = PTR___NSConcreteStackBlock_00068030;
          *(undefined4 *)(local_2f0 + 1) = 0xc2000000;
          *(undefined4 *)((long)local_2f0 + 0xc) = 0;
          local_2f0[2] = FUN_0005ec40;
          local_2f0[3] = &DAT_00068360;
          uVar8 = local_70;
          puVar1 = local_2f0;
          local_2f0[4] = local_70;
          puVar2 = local_2f0;
          uVar8 = _objc_retain(uVar8);
          _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,puVar2);
          _objc_release(puVar1[4]);
          _objc_release(uVar8);
          _objc_release(local_78);
          _objc_release(local_148);
          _objc_release(local_2c0);
          _objc_release(local_2d0);
          iVar9 = -0x3df94c9e;
        }
      }
      else {
        iVar9 = -0x191a859b;
        if (((iVar4 != 0x34d892f2) && (iVar9 = -0x1661e16a, iVar4 != 0x38ebf63e)) &&
           (iVar9 = iVar4, iVar4 == 0x398f3503)) {
          iVar9 = -0xda04e3c;
        }
      }
    }
    else if (iVar4 < 0x3f824fe6) {
      iVar9 = 0x2a9ac93c;
      if (((iVar4 != 0x39a3bc60) && (iVar9 = 0x6baf69a9, iVar4 != 0x39ed6c32)) &&
         (iVar9 = iVar4, iVar4 == 0x3d215df0)) {
        iVar9 = -0x7bde1a1;
      }
    }
    else if (iVar4 == 0x3f824fe6) {
      _objc_msgSend(DAT_000a4070,local_338,_g_isMirroredMarkfbs);
      iVar9 = 0x2fe1cf3a;
    }
    else {
      iVar9 = 0x58b65401;
      if ((iVar4 != 0x4150d8c7) && (iVar9 = iVar4, iVar4 == 0x422c2624)) {
        _objc_release(local_f8);
        iVar9 = -0x70e8286a;
      }
    }
  }
  if (iVar4 < 0x63ae54ec) {
    if (0x56d99e50 < iVar4) {
      if (iVar4 < 0x5c6df818) {
        if (iVar4 < 0x5abb111f) {
          if (iVar4 == 0x56d99e51) {
            _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w2Proglobal,local_78,1);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = 0x6baf69a9;
          }
          else {
            iVar9 = 0x70409622;
            if ((iVar4 != 0x58013e23) && (iVar9 = iVar4, iVar4 == 0x58b65401)) {
              puVar3[-2] = local_2b8;
              puVar3[-1] = local_2c8;
              local_d8 = _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_____Virtualfilesdeleted
                                      );
              iVar9 = 0x532b2eb6;
            }
          }
        }
        else {
          iVar9 = 0x5122bc20;
          if (iVar4 != 0x5abb111f) {
            if (iVar4 == 0x5b8f0639) {
              _objc_msgSend(local_e8,local_2b0,local_f0);
              iVar9 = -0x4132e261;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == 0x5c3072b1) {
                local_240 = DAT_000a4070;
                iVar9 = 0x1d29f321;
              }
            }
          }
        }
      }
      else if (iVar4 < 0x5f5fbb39) {
        iVar9 = 0x70409622;
        if (iVar4 != 0x5c6df818) {
          if (iVar4 == 0x5ce8635c) {
            _objc_msgSend(local_90,local_c8,&cf_w2Prodivide,local_78,1);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = 0x7d119aca;
          }
          else {
            iVar9 = iVar4;
            if (iVar4 == 0x5de97264) {
              iVar9 = -0x704a3c6a;
            }
          }
        }
      }
      else if (iVar4 == 0x5f5fbb39) {
        _objc_release(local_a0);
        iVar9 = 0x4c9ad59d;
      }
      else if (iVar4 == 0x60db3c02) {
        _objc_release(local_1d0);
        iVar9 = -0x4ba72286;
      }
      else if (iVar4 == 0x61ef7441) {
LAB_00053298:
        iVar9 = -0x46f437e5;
      }
      goto LAB_00051a9c;
    }
    if (0x487476b6 < iVar4) {
      if (iVar4 < 0x532b2eb6) {
        iVar9 = 0x7b208d2;
        if (iVar4 != 0x487476b7) {
          if (iVar4 == 0x4c9ad59d) {
            _objc_release(local_a0);
            iVar9 = 0x424323d6;
          }
          else {
            iVar9 = iVar4;
            if (iVar4 == 0x5122bc20) {
              _objc_msgSend(local_288,"removeItemAtPath:error:",local_280,0);
              iVar9 = -0x80cd9c5;
            }
          }
        }
      }
      else if (iVar4 == 0x532b2eb6) {
        iVar9 = -0x20731938;
      }
      else if (iVar4 == 0x53763759) {
        iVar9 = -0x29c8320c;
      }
      else if (iVar4 == 0x56bb6386) {
        _objc_msgSend(local_220,local_228,local_230,0);
        iVar9 = 0x1fe96fc8;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 < 0x438d358e) {
      if (iVar4 == 0x424323d6) {
        unaff_x28 = local_88;
        iVar9 = -0x498e7a96;
      }
      else if (iVar4 == 0x42b510fe) {
        _objc_retain(local_1c8);
        _objc_msgSend(local_1c8,local_1c8,local_200,&cf__w2avfictitious_mov);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_1d8,"removeItemAtPath:error:",uVar8,0);
        _objc_release(uVar8);
        _objc_release(local_1c8);
        iVar9 = 0x1d125e40;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 == 0x438d358e) {
      _objc_msgSend(local_298,local_2b0,local_2a0);
      iVar9 = -0x7a2d2a63;
      goto LAB_00051a9c;
    }
    if (iVar4 == 0x43fafcae) {
      iVar9 = 0x26fdf948;
      goto LAB_00051a9c;
    }
    if (iVar4 != 0x46b243bb) goto LAB_00051a9c;
    iVar4 = _objc_msgSend(local_1c0,local_2b0,local_1a8);
    _objc_release(local_1a0);
    _objc_release(local_1b0);
    _objc_release(local_1b8);
    iVar9 = -0xd046398;
  }
  else {
    if (iVar4 < 0x6fe98bd2) {
      if (iVar4 < 0x6baf69a9) {
        if (iVar4 < 0x683c7d88) {
          iVar9 = 0x4c9ad59d;
          if (((iVar4 != 0x63ae54ec) && (iVar9 = 0x5c3072b1, iVar4 != 0x6580e03f)) &&
             (iVar9 = iVar4, iVar4 == 0x6827b079)) {
            _objc_msgSend(local_288,"removeItemAtPath:error:",local_280,0);
            iVar9 = 0x5122bc20;
          }
        }
        else {
          iVar9 = -0x7a2d2a63;
          if (iVar4 != 0x683c7d88) {
            if (iVar4 == 0x693aee93) {
              local_220 = DAT_000a4070;
              local_230 = _g_tempFilestep;
              local_228 = "removeItemAtPath:error:";
              iVar9 = -0x2b75ddfa;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == 0x69ea1a63) {
                local_1d9 = _objc_msgSend(local_1e8,local_2b0,local_1f8);
                _objc_release(local_1f0);
                iVar9 = -0x33eda65c;
              }
            }
          }
        }
      }
      else if (iVar4 < 0x6ddc2fa2) {
        if (iVar4 == 0x6baf69a9) {
          local_b8 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w2Proglobal,
                                   local_78,1);
          _objc_retain(local_b8);
          iVar9 = 0x2e697176;
        }
        else if (iVar4 == 0x6c9b8cd0) {
          iVar9 = 0x9ff8359;
        }
        else if (iVar4 == 0x6d138715) {
          local_b0 = local_b8;
          iVar9 = -0x450b1a1;
        }
      }
      else if (iVar4 == 0x6ddc2fa2) {
        iVar9 = -0x586f6de5;
      }
      else if (iVar4 == 0x6f6dec2c) {
        unaff_x28 = local_b0;
        iVar9 = -0x498e7a96;
        if (local_a1 == '\0') {
          iVar9 = -0x674b5d4e;
        }
      }
      else if (iVar4 == 0x6fdce022) {
        iVar9 = -0x49f96f7e;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 < 0x761e1d32) {
      if (iVar4 < 0x70409622) {
        iVar9 = 0x1f03d5a1;
        if (iVar4 != 0x6fe98bd2) {
          if (iVar4 == 0x6ff8f3fa) {
            _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_GlobalVirtualFilesdeleted);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            iVar9 = iVar4;
            if (iVar4 != 0x7000249f) goto LAB_00051a9c;
          }
          iVar9 = -0x2b8afed9;
        }
      }
      else if (iVar4 == 0x70409622) {
        local_260 = DAT_000a4070;
        iVar9 = -0x2d45fa68;
      }
      else if (iVar4 == 0x71857c33) {
        _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w,local_78,1);
        _objc_retainAutoreleasedReturnValue();
        iVar9 = 0x21c3ddb7;
      }
      else if (iVar4 == 0x74ddd02d) {
        _objc_release(local_108);
        iVar9 = 0x130b845f;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 < 0x7dd1268f) {
      iVar9 = 0x14534c95;
      if (iVar4 != 0x761e1d32) {
        if (iVar4 == 0x7776f7fc) {
          iVar9 = 0x46b243bb;
        }
        else {
          iVar9 = iVar4;
          if (iVar4 == 0x7d119aca) {
            _objc_msgSend(local_90,local_c8,&cf_w2Prodivide,local_78,1);
            local_88 = _objc_retainAutoreleasedReturnValue();
            iVar9 = -0x76bc34bf;
          }
        }
      }
      goto LAB_00051a9c;
    }
    if (iVar4 != 0x7dd1268f) {
      iVar9 = -0x7ef9fe24;
      if ((iVar4 != 0x7e55cbd8) && (iVar9 = iVar4, iVar4 == 0x7e6f05e1)) {
        iVar9 = -0x7f7797e7;
      }
      goto LAB_00051a9c;
    }
    iVar4 = _objc_msgSend(local_240,local_2b0,local_238);
    iVar9 = -0x8647737;
  }
  if (iVar4 == 0) {
    iVar9 = 0x38ebf63e;
  }
  goto LAB_00051a9c;
}



void FUN_000541b8(void)

{
  cfstringStruct *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  cfstringStruct *unaff_x28;
  cfstringStruct *pcVar8;
  char *local_b8;
  char local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  
  iVar4 = 0x48462e42;
LAB_0005423c:
  while (iVar2 = iVar4, pcVar8 = unaff_x28, iVar4 = iVar2, unaff_x28 = pcVar8, iVar2 < 0x2313a64c) {
    if (iVar2 < -0x42ddaf31) {
      if (iVar2 < -0x5010a45a) {
        if (-0x6a3dd13e < iVar2) {
          iVar5 = -0x62a578a9;
          iVar3 = 0x684af31d;
          if (iVar2 != -0x5e9fd0ab) {
            iVar3 = iVar2;
          }
          iVar4 = 0x503cfd4f;
          if (iVar2 != -0x62a578a8) {
            iVar4 = iVar3;
          }
          iVar3 = -0x6a3dd13d;
          iVar6 = 0x2fdbbfbe;
          iVar7 = -0x2856cc2e;
          if (iVar2 != -0x655c8ce3) {
            iVar7 = iVar2;
          }
          goto LAB_0005456c;
        }
        if (iVar2 == -0x7c729da6) {
          _objc_msgSend(local_a8,local_98,local_a0,0);
          iVar4 = 0x712c3e4b;
        }
        else if (iVar2 == -0x77f33a8e) {
          iVar4 = 0x31c9d117;
          if (local_a9 == '\0') {
            iVar4 = 0x37daa680;
          }
        }
        else if (iVar2 == -0x6e6673bc) {
          _objc_release(local_70);
          iVar4 = -0x2fc6af06;
        }
      }
      else if (iVar2 < -0x498bfe30) {
        if (iVar2 < -0x4ba89dfa) {
          if (iVar2 == -0x5010a45a) {
            local_a8 = DAT_000a4070;
            local_a0 = _g_isMirroredMarkxz;
            iVar4 = 0x70c0b854;
          }
          else {
            iVar4 = 0x45228556;
            if (iVar2 != -0x4f7d92b8) {
              iVar4 = iVar2;
            }
          }
        }
        else if (iVar2 == -0x4ba89dfa) {
          local_88 = _g_isMirroredMarkxz;
          local_80 = "createDirectoryAtPath:withIntermediateDirectories:attributes:error:";
          local_78 = local_90;
          iVar4 = 0x4cd72c20;
        }
        else {
          iVar4 = -0x2856cc2e;
          if (iVar2 != -0x4a0aec94) {
            iVar4 = iVar2;
          }
        }
      }
      else if (iVar2 < -0x44ec9183) {
        iVar3 = -0x42ddaf31;
        if (iVar2 != -0x45e73a57) {
          iVar3 = iVar2;
        }
        iVar4 = 0x215d6a57;
        if (iVar2 != -0x498bfe30) {
          iVar4 = iVar3;
        }
      }
      else if (iVar2 == -0x44ec9183) {
        iVar4 = 0x4db2e68e;
      }
      else if (iVar2 == -0x43bf9dde) {
        iVar2 = _objc_msgSend(DAT_000a4070,local_b8,_g_isMirroredMarkxz);
        local_68 = pcVar8;
        iVar4 = 0x2c5b3663;
        if (iVar2 == 0) {
          iVar4 = 0x3326f0e2;
        }
      }
    }
    else if (iVar2 < -0x162a4f4a) {
      if (iVar2 < -0x2fc6af06) {
        iVar3 = -0x43bf9dde;
        pcVar1 = &cf_elbR;
        if (iVar2 != -0x31fd8263) {
          iVar3 = iVar2;
          pcVar1 = pcVar8;
        }
        iVar4 = 0x4eadf8a6;
        if (iVar2 != -0x3e57d6cb) {
          iVar4 = iVar3;
          unaff_x28 = pcVar1;
        }
        iVar3 = -0x77f33a8e;
        if (iVar2 != -0x3ecb5e85) {
          iVar3 = iVar2;
        }
        iVar5 = -0x3ecb5e85;
        if (iVar2 != -0x42ddaf31) {
          iVar5 = iVar3;
        }
        if (iVar2 < -0x3e57d6cb) {
          unaff_x28 = pcVar8;
          iVar4 = iVar5;
        }
      }
      else {
        if (-0x2856cc2f < iVar2) {
          iVar5 = -0x2856cc2e;
          iVar4 = 0x313a5a9c;
          iVar6 = -0x23516222;
          iVar3 = -0x97c5be2;
          goto LAB_00054914;
        }
        if (iVar2 == -0x2fc6af06) {
          _objc_release(local_70);
          iVar4 = -0x5e9fd0ab;
        }
        else if (iVar2 == -0x2aac39e4) {
          local_98 = "removeItemAtPath:error:";
          iVar4 = 0x43e82b62;
        }
      }
    }
    else if (iVar2 < 0xac76649) {
      if (iVar2 < 0x4fd3a08) {
        iVar3 = 0x70bd66e9;
        if (iVar2 != -0x97c5be2) {
          iVar3 = iVar2;
        }
        iVar4 = -0x5010a45a;
        if (iVar2 != -0x162a4f4a) {
          iVar4 = iVar3;
        }
      }
      else if (iVar2 == 0x4fd3a08) {
        iVar4 = 0x70e34e15;
      }
      else if (iVar2 == 0x6fca87f) {
        _AudioServicesPlaySystemSound(0x5f0);
        _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isenabledw2ProChinese);
        iVar4 = 0x215d6a57;
      }
    }
    else if (iVar2 < 0x215d6a57) {
      iVar4 = -0x3ecb5e85;
      if ((iVar2 != 0xd0fcd81) && (iVar4 = iVar2, iVar2 == 0xac76649)) {
        return;
      }
    }
    else if (iVar2 == 0x215d6a57) {
      _AudioServicesPlaySystemSound(0x5f0);
      local_b8 = "fileExistsAtPath:";
      local_a9 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isenabledw2ProChinese);
      iVar4 = -0x45e73a57;
    }
    else {
      iVar4 = 0x56b5262d;
      if (iVar2 != 0x226cabc2) {
        iVar4 = iVar2;
      }
    }
  }
  if (iVar2 < 0x4cd72c20) {
    if (iVar2 < 0x37daa680) {
      if (iVar2 < 0x2fdbbfbe) {
        iVar4 = -0x5010a45a;
        if (iVar2 != 0x2c5b3663) {
          iVar4 = iVar2;
        }
        iVar3 = -0x498bfe30;
        if (iVar2 != 0x2575c47d) {
          iVar3 = iVar4;
        }
        iVar4 = 0x503a52fe;
        if (iVar2 != 0x2313a64c) {
          iVar4 = iVar3;
        }
      }
      else if (iVar2 < 0x31c9d117) {
        iVar5 = 0x2fdbbfbe;
        iVar4 = -0x655c8ce3;
        iVar6 = 0x313a5a9c;
        iVar3 = 0x4681c375;
LAB_00054914:
        if (iVar2 != iVar6) {
          iVar3 = iVar2;
        }
        if (iVar2 != iVar5) {
          iVar4 = iVar3;
        }
      }
      else {
        iVar4 = 0x45228556;
        if ((iVar2 != 0x31c9d117) && (iVar4 = iVar2, iVar2 == 0x3326f0e2)) {
          local_90 = DAT_000a4070;
          iVar4 = -0x4ba89dfa;
        }
      }
      goto LAB_0005423c;
    }
    if (iVar2 < 0x43e82b62) {
      if (iVar2 < 0x3ec6f954) {
        iVar3 = 0x37daa680;
        iVar5 = -0x44ec9183;
        if (iVar2 != 0x3b1859aa) {
          iVar5 = iVar2;
        }
        goto LAB_000549a0;
      }
      iVar4 = -0x23516222;
      if ((iVar2 != 0x3ec6f954) && (iVar4 = iVar2, iVar2 == 0x432e6df7)) {
        local_70 = local_68;
        iVar4 = 0x226cabc2;
      }
      goto LAB_0005423c;
    }
    iVar5 = 0x4681c374;
    iVar3 = 0x4eadf8a6;
    if (iVar2 != 0x48462e42) {
      iVar3 = iVar2;
    }
    iVar4 = -0x44ec9183;
    if (iVar2 != 0x4681c375) {
      iVar4 = iVar3;
    }
    iVar3 = 0x4fd3a08;
    if (iVar2 != 0x45228556) {
      iVar3 = iVar2;
    }
    iVar6 = 0x712c3e4b;
    if (iVar2 != 0x43e82b62) {
      iVar6 = iVar3;
    }
  }
  else {
    if (0x70bd66e8 < iVar2) {
      if (iVar2 < 0x71510e41) {
        if (iVar2 < 0x70e34e15) {
          iVar3 = -0x2aac39e4;
          if (iVar2 != 0x70c0b854) {
            iVar3 = iVar2;
          }
          iVar4 = 0x7e339cd9;
          if (iVar2 != 0x70bd66e9) {
            iVar4 = iVar3;
          }
        }
        else {
          iVar4 = -0x23516222;
          if ((iVar2 != 0x70e34e15) && (iVar4 = iVar2, iVar2 == 0x712c3e4b)) {
            _objc_msgSend(local_a8,local_98,local_a0,0);
            iVar4 = -0x62a578a8;
          }
        }
      }
      else if (iVar2 < 0x7630ab9f) {
        if (iVar2 == 0x71510e41) {
          iVar4 = 0x432e6df7;
        }
        else {
          iVar4 = 0x7e339cd9;
          if (iVar2 != 0x76060759) {
            iVar4 = iVar2;
          }
        }
      }
      else {
        iVar3 = 0x7630ab9f;
        iVar5 = -0x31fd8263;
        if (iVar2 != 0x7e339cd9) {
          iVar5 = iVar2;
        }
LAB_000549a0:
        iVar4 = -0x6a3dd13d;
        if (iVar2 != iVar3) {
          iVar4 = iVar5;
        }
      }
      goto LAB_0005423c;
    }
    if (iVar2 < 0x503a52fe) {
      if (iVar2 == 0x4cd72c20) {
        _objc_msgSend(local_78,local_80,local_88,1,0,0);
        iVar4 = 0x503cfd4f;
      }
      else {
        iVar3 = 0x2575c47d;
        if (iVar2 != 0x4eadf8a6) {
          iVar3 = iVar2;
        }
        unaff_x28 = &cf_Rotatesuccess;
        iVar4 = -0x43bf9dde;
        if (iVar2 != 0x4db2e68e) {
          unaff_x28 = pcVar8;
          iVar4 = iVar3;
        }
      }
      goto LAB_0005423c;
    }
    iVar5 = 0x56b5262c;
    iVar3 = 0x503a52fe;
    if (iVar2 != 0x684af31d) {
      iVar3 = iVar2;
    }
    iVar4 = -0x2fc6af06;
    if (iVar2 != 0x56b5262d) {
      iVar4 = iVar3;
    }
    iVar3 = 0x503a52fe;
    iVar6 = 0xac76649;
    iVar7 = 0x432e6df7;
    if (iVar2 != 0x503cfd4f) {
      iVar7 = iVar2;
    }
LAB_0005456c:
    if (iVar2 != iVar3) {
      iVar6 = iVar7;
    }
  }
  if (iVar2 <= iVar5) {
    iVar4 = iVar6;
  }
  goto LAB_0005423c;
}



void FUN_00054b20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  int iVar6;
  dispatch_time_t dVar7;
  undefined8 uVar8;
  char *local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  char *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  ppcVar5 = &local_130;
  local_110 = "createDirectoryAtPath:withIntermediateDirectories:attributes:error:";
  local_118 = "removeItemAtPath:error:";
  local_128 = "dismissViewControllerAnimated:completion:";
  local_130 = "fileExistsAtPath:";
  local_120 = param_1;
  iVar1 = 0x232b6646;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar6 = iVar1, iVar1 = iVar6, -0x1eb78388 < iVar6) {
              if (iVar6 < 0x1125cfed) {
                if (iVar6 < -0x3e04685) {
                  iVar1 = -0x39d4b7f5;
                  if (iVar6 != -0x11a60b7b) {
                    iVar1 = iVar6;
                  }
                  iVar2 = -0x11a60b7b;
                  if (iVar6 != -0x1278aa47) {
                    iVar2 = iVar1;
                  }
                  iVar1 = -0x4a004c4f;
                  if (iVar6 != -0x1eb78387) {
                    iVar1 = iVar2;
                  }
                }
                else if (iVar6 < 0xd507d1a) {
                  iVar2 = -0x70ff8504;
                  if (iVar6 != 0x1197010) {
                    iVar2 = iVar6;
                  }
                  iVar1 = 0x32e92d7e;
                  if (iVar6 != -0x3e04685) {
                    iVar1 = iVar2;
                  }
                }
                else if (iVar6 == 0xd507d1a) {
                  _objc_msgSend(DAT_000a4070,local_118,_g_isenabledw2ProChinese,0);
                  local_d0 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  iVar1 = -0x1278aa47;
                }
                else if (iVar6 == 0x10a1711e) {
                  iVar6 = _objc_msgSend(local_e8,local_d8,local_e0);
                  iVar1 = 0x1125cfed;
                  if (iVar6 == 0) {
                    iVar1 = -0x328177af;
                  }
                }
              }
              else if (iVar6 < 0x24013590) {
                iVar2 = -0x58b83d9e;
                if (iVar6 != 0x232b6646) {
                  iVar2 = iVar6;
                }
                iVar1 = -0x70ff8504;
                if (iVar6 != 0x1b4a73c5) {
                  iVar1 = iVar2;
                }
                iVar2 = 0x65436fe6;
                if (iVar6 != 0x11feca0f) {
                  iVar2 = iVar6;
                }
                iVar3 = 0xd507d1a;
                if (iVar6 != 0x1125cfed) {
                  iVar3 = iVar2;
                }
                if (iVar6 < 0x1b4a73c5) {
                  iVar1 = iVar3;
                }
              }
              else if (iVar6 < 0x32e92d7e) {
                if (iVar6 == 0x24013590) {
                  _objc_msgSend(DAT_000a4070,local_110,_g_isenabledw2ProChinese,1,0,0);
                  _objc_msgSend(local_f0,local_f8,1,0);
                  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  uVar8 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                                "alertControllerWithTitle:message:preferredStyle:",&cf__SO_Ne,uVar8,
                                1);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
                  uVar8 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar8,"keyWindow");
                  uVar8 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar8,"rootViewController");
                  _objc_retainAutoreleasedReturnValue();
                  iVar1 = -0x7d3cf045;
                }
                else if (iVar6 == 0x2e62ba05) {
                  _objc_msgSend(DAT_000a4070,local_118,_g_isenabledw2ProChinese,0);
                  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  iVar1 = 0xd507d1a;
                }
              }
              else {
                iVar1 = -0x50baf067;
                if ((iVar6 != 0x32e92d7e) && (iVar1 = iVar6, iVar6 == 0x65436fe6)) {
                  _objc_msgSend(local_a8,"presentViewController:animated:completion:",local_a0,1,0);
                  _objc_release(local_a8);
                  _objc_release(local_b0);
                  _objc_release(local_b8);
                  dVar7 = _dispatch_time(0,2000000000);
                  *local_108 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_108 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_108 + 0xc) = 0;
                  local_108[2] = FUN_0005eddc;
                  local_108[3] = &DAT_00068360;
                  puVar4 = local_108;
                  _objc_retain(local_c8);
                  puVar4[4] = local_c0;
                  _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,local_108);
                  _objc_release(puVar4[4]);
                  _objc_release(local_c8);
                  _objc_release(local_d0);
                  iVar1 = 0x1197010;
                }
              }
            }
            if (-0x50baf068 < iVar6) break;
            if (iVar6 < -0x662a20b7) {
              if (iVar6 < -0x70ff8504) {
                if (iVar6 == -0x7d3cf045) {
                  _objc_msgSend(DAT_000a4070,local_110,_g_isenabledw2ProChinese,1,0,0);
                  _objc_msgSend(local_f0,local_f8,1,0);
                  local_98 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  _objc_retain(local_98);
                  local_90 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                                           "alertControllerWithTitle:message:preferredStyle:",
                                           &cf__SO_Ne,local_98,1);
                  _objc_retain(local_90);
                  local_88 = local_90;
                  local_80 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
                  _objc_retain(local_80);
                  local_78 = _objc_msgSend(local_80,"keyWindow");
                  _objc_retain(local_78);
                  local_70 = _objc_msgSend(local_78,"rootViewController");
                  _objc_retain(local_70);
                  iVar1 = -0x3e04685;
                }
                else {
                  iVar1 = -0x285af810;
                  if (iVar6 != -0x78582044) {
                    iVar1 = iVar6;
                  }
                }
              }
              else if (iVar6 == -0x70ff8504) {
                iVar1 = -0x4b3fe238;
              }
              else if (iVar6 == -0x6bcd35aa) {
                _objc_retain(local_d0);
                _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                              "alertControllerWithTitle:message:preferredStyle:",&cf_English,
                              local_d0,1);
                _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,"keyWindow");
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,"rootViewController");
                _objc_retainAutoreleasedReturnValue();
                iVar1 = -0x39d4b7f5;
              }
            }
            else if (iVar6 < -0x58be26e3) {
              if (iVar6 == -0x662a20b7) {
                _objc_msgSend(local_70,"presentViewController:animated:completion:",local_88,1,0);
                _objc_release(local_70);
                _objc_release(local_78);
                _objc_release(local_80);
                iVar1 = -0x50baf067;
              }
              else {
                iVar1 = -0x1eb78387;
                if (iVar6 != -0x5c5d7045) {
                  iVar1 = iVar6;
                }
              }
            }
            else {
              iVar1 = 0x1197010;
              if ((iVar6 != -0x58be26e3) && (iVar1 = iVar6, iVar6 == -0x58b83d9e)) {
                local_108 = ppcVar5 + -6;
                ppcVar5 = ppcVar5 + -0xc;
                local_100 = ppcVar5;
                iVar1 = -0x78582044;
              }
            }
          }
          if (iVar6 < -0x39d4b7f5) break;
          if (iVar6 < -0x2f819387) {
            if (iVar6 == -0x39d4b7f5) {
              _objc_retain(local_d0);
              local_c8 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                                       "alertControllerWithTitle:message:preferredStyle:",
                                       &cf_English,local_d0,1);
              _objc_retain(local_c8);
              local_c0 = local_c8;
              local_b8 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
              _objc_retain(local_b8);
              local_b0 = _objc_msgSend(local_b8,"keyWindow");
              _objc_retain(local_b0);
              local_a8 = _objc_msgSend(local_b0,"rootViewController");
              _objc_retain(local_a8);
              local_a0 = local_c0;
              iVar1 = 0x11feca0f;
            }
            else {
              iVar1 = -0x7d3cf045;
              if (iVar6 != -0x328177af) {
                iVar1 = iVar6;
              }
            }
          }
          else {
            iVar1 = -0x58b83d9e;
            if ((iVar6 != -0x2f819387) && (iVar1 = iVar6, iVar6 == -0x285af810)) {
              _AudioServicesPlaySystemSound(0x5f0);
              local_f8 = local_128;
              local_f0 = local_120;
              _objc_msgSend(local_120,local_128,1,0);
              local_e8 = DAT_000a4070;
              local_e0 = _g_isenabledw2ProChinese;
              local_d8 = local_130;
              iVar1 = 0x10a1711e;
            }
          }
        }
        if (-0x4b3fe239 < iVar6) break;
        if (iVar6 == -0x50baf067) {
          _objc_msgSend(local_70,"presentViewController:animated:completion:",local_88,1,0);
          _objc_release(local_70);
          _objc_release(local_78);
          _objc_release(local_80);
          iVar1 = -0x5c5d7045;
        }
        else if (iVar6 == -0x4c9e6c01) {
          dVar7 = _dispatch_time(0,2000000000);
          *local_100 = PTR___NSConcreteStackBlock_00068030;
          *(undefined4 *)(local_100 + 1) = 0xc2000000;
          *(undefined4 *)((long)local_100 + 0xc) = 0;
          local_100[2] = FUN_0005ef04;
          local_100[3] = &DAT_00068360;
          puVar4 = local_100;
          _objc_retain(local_90);
          puVar4[4] = local_88;
          _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,local_100);
          _objc_release(puVar4[4]);
          _objc_release(local_90);
          _objc_release(local_98);
          iVar1 = -0x4a004c4f;
        }
      }
      if (iVar6 != -0x4a004c4f) break;
      dVar7 = _dispatch_time(0,2000000000);
      *local_100 = PTR___NSConcreteStackBlock_00068030;
      *(undefined4 *)(local_100 + 1) = 0xc2000000;
      *(undefined4 *)((long)local_100 + 0xc) = 0;
      local_100[2] = FUN_0005ef04;
      local_100[3] = &DAT_00068360;
      puVar4 = local_100;
      _objc_retain(local_90);
      puVar4[4] = local_88;
      _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,local_100);
      _objc_release(puVar4[4]);
      _objc_release(local_90);
      _objc_release(local_98);
      iVar1 = -0x58be26e3;
    }
  } while (iVar6 != -0x4b3fe238);
  return;
}



void FUN_000555e4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *unaff_x27;
  cfstringStruct *unaff_x28;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  byte local_1f8;
  byte local_1f4;
  undefined8 local_1f0;
  char *local_1e8;
  char local_1d9;
  undefined8 local_1d8;
  undefined8 local_1d0;
  char local_1c1;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  byte local_191;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  char local_169;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  char *local_100;
  char local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_92;
  byte local_91;
  undefined8 local_90;
  byte local_81;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  
  iVar3 = -0x78b167c;
LAB_00055650:
  iVar7 = iVar3;
  iVar3 = iVar7;
  if (iVar7 < 0x749834a) {
    if (iVar7 < -0x3c3bcd33) {
      if (iVar7 < -0x5853ec17) {
        if (iVar7 < -0x70673f77) {
          if (iVar7 < -0x7799735a) {
            iVar1 = -0x2ab348e0;
            if (iVar7 != -0x786be3bd) {
              iVar1 = iVar7;
            }
            iVar3 = 0x56bf1790;
            if (iVar7 != -0x790fd56d) {
              iVar3 = iVar1;
            }
            iVar1 = -0x52e69161;
            if (iVar7 != -0x7b662f95) {
              iVar1 = iVar7;
            }
            iVar2 = -0x67b27419;
            if (iVar7 != -0x7bd0d950) {
              iVar2 = iVar1;
            }
            if (iVar7 < -0x790fd56d) {
              iVar3 = iVar2;
            }
          }
          else if (iVar7 < -0x7494906c) {
            iVar1 = -0x347dc1c2;
            if (iVar7 != -0x74a69bca) {
              iVar1 = iVar7;
            }
            iVar3 = -0x4b594795;
            if (iVar7 != -0x7799735a) {
              iVar3 = iVar1;
            }
          }
          else if (iVar7 == -0x7494906c) {
            _objc_msgSend(local_140,local_148,local_150,0);
            local_138 = DAT_000a4070;
            local_130 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            _objc_retain(local_130);
            local_128 = _objc_msgSend(local_130,"firstObject");
            iVar3 = -0x74a69bca;
          }
          else if (iVar7 == -0x73721466) {
            iVar3 = -0x50af0f6b;
          }
          else if (iVar7 == -0x73246add) {
            _AudioServicesPlaySystemSound(0x44e);
            iVar3 = 0x43a8b996;
          }
        }
        else if (iVar7 < -0x6342c18e) {
          if (iVar7 < -0x67b27419) {
            iVar3 = -0x17d9e09e;
            if ((iVar7 != -0x70673f77) && (iVar3 = iVar7, iVar7 == -0x6b99cdc7)) {
              _objc_release(local_b0);
              iVar3 = 0x4eb55601;
            }
          }
          else {
            iVar1 = 0x12871aae;
            if (iVar7 != -0x641531d0) {
              iVar1 = iVar7;
            }
            iVar3 = 0x3c9f0e36;
            if (iVar7 != -0x67b27419) {
              iVar3 = iVar1;
            }
          }
        }
        else if (iVar7 < -0x5d5d366b) {
          iVar1 = 0x2698c2b7;
          if (iVar7 != -0x6108edcc) {
            iVar1 = iVar7;
          }
          bVar6 = iVar7 != -0x6342c18e;
          pcVar4 = &cf_lg;
          if (bVar6) {
            pcVar4 = unaff_x28;
          }
          pcVar5 = &cf__sQ;
          if (bVar6) {
            pcVar5 = unaff_x27;
          }
          unaff_x27 = pcVar5;
          unaff_x28 = pcVar4;
          iVar3 = 0x398cfe85;
          if (bVar6) {
            iVar3 = iVar1;
          }
        }
        else if (iVar7 == -0x5d5d366b) {
          iVar3 = 0x52ee992c;
        }
        else {
          iVar3 = -0x790fd56d;
          if ((iVar7 != -0x5d269c53) && (iVar3 = iVar7, iVar7 == -0x588de6b7)) {
            local_178 = DAT_000a4070;
            iVar3 = 0x69fb0ec;
          }
        }
        goto LAB_00055650;
      }
      if (-0x4a52d572 < iVar7) {
        if (iVar7 < -0x468ab4eb) {
          if (iVar7 < -0x4a30325f) {
            if (iVar7 == -0x4a52d571) {
LAB_000570dc:
              iVar3 = 0x5a525d91;
            }
            else {
              iVar3 = -0x3186872d;
              if (iVar7 != -0x4a41b28c) {
                iVar3 = iVar7;
              }
            }
          }
          else if (iVar7 == -0x4a30325f) {
            iVar3 = 0x50310196;
          }
          else if (iVar7 == -0x49e9471c) {
            local_1c1 = _objc_msgSend(local_1d8,local_1e8,local_1d0);
            iVar3 = -0xac989fd;
          }
          else if (iVar7 == -0x47b2780a) {
            iVar3 = -0x12d2168b;
            if (local_169 == '\0') {
              iVar3 = 0x51a4f88d;
            }
          }
        }
        else if (iVar7 < -0x418781ae) {
          if (iVar7 == -0x468ab4eb) {
            _objc_msgSend(DAT_000a4070,local_1e8,_g_isMirroredMarkfbs);
            iVar3 = -0x1783ddc;
          }
          else if (iVar7 == -0x423854ab) {
            local_1b0 = local_1b8;
            iVar3 = 0x66d514b4;
          }
        }
        else if (iVar7 == -0x418781ae) {
          iVar3 = 0x575e0a06;
        }
        else if (iVar7 == -0x3f8802e0) {
          iVar3 = 0x42f784bc;
        }
        else if (iVar7 == -0x3e083431) {
          iVar3 = 0x37bb639c;
        }
        goto LAB_00055650;
      }
      if (iVar7 < -0x52e69161) {
        if (iVar7 < -0x555e87c2) {
          iVar1 = 0x352e462d;
          if (iVar7 != -0x57f70d6e) {
            iVar1 = iVar7;
          }
          iVar3 = -0x1d232d73;
          if (iVar7 != -0x5853ec17) {
            iVar3 = iVar1;
          }
        }
        else {
          iVar3 = 0x493ee1e;
          if ((iVar7 != -0x555e87c2) && (iVar3 = iVar7, iVar7 == -0x52edcff3)) {
            _AudioServicesPlaySystemSound(0x5f0);
            iVar3 = -0x1dab4ba3;
          }
        }
        goto LAB_00055650;
      }
      if (-0x51cb53a5 < iVar7) {
        if (iVar7 == -0x51cb53a4) {
          _objc_msgSend(local_140,local_148,local_150,0);
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar11,"firstObject");
LAB_00056d5c:
          iVar3 = -0x7494906c;
        }
        else {
          iVar3 = 0x246b1c0;
          if ((iVar7 != -0x50af0f6b) && (iVar3 = iVar7, iVar7 == -0x4b594795)) {
            iVar3 = -0x6342c18e;
          }
        }
        goto LAB_00055650;
      }
      if (iVar7 == -0x52e69161) {
        iVar3 = 0x75171ae6;
        goto LAB_00055650;
      }
      if (iVar7 != -0x51e50455) goto LAB_00055650;
      _objc_retain(local_128);
      _objc_msgSend(local_128,local_128,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(local_138,local_148,uVar11,0);
      _objc_release(uVar11);
      _objc_release(local_128);
      _objc_release(local_130);
    }
    else {
      if (-0x17d9e09f < iVar7) {
        if (iVar7 < -0x78b167c) {
          if (iVar7 < -0xf9a4dc0) {
            if (iVar7 < -0x12d2168b) {
              if (iVar7 == -0x17d9e09e) {
                local_180 = local_70;
                iVar3 = -0x3e083431;
              }
              else if (iVar7 == -0x15b612f2) {
                _objc_release(local_188);
                iVar3 = 0x69cd204b;
              }
            }
            else {
              iVar1 = 0x7a8d9f6e;
              if (iVar7 != -0x1048c6c8) {
                iVar1 = iVar7;
              }
              iVar3 = 0x4d541737;
              if (iVar7 != -0x12d2168b) {
                iVar3 = iVar1;
              }
            }
          }
          else if (iVar7 < -0xac989fd) {
            if (iVar7 == -0xf9a4dc0) {
              iVar3 = -0x3f8802e0;
            }
            else if (iVar7 == -0xc2427c6) {
              _objc_retain(local_1b0);
              _objc_msgSend(local_1b0,"firstObject");
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar11,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_1c0,local_1e8,uVar11);
              iVar3 = 0x205ec5c;
            }
          }
          else if (iVar7 == -0xac989fd) {
            iVar3 = 0x1ba1e6e0;
          }
          else {
            iVar3 = -0xf9a4dc0;
            if ((iVar7 != -0xa51e7f3) && (iVar3 = iVar7, iVar7 == -0xa33f4a7)) {
              iVar3 = 0x53651e93;
            }
          }
        }
        else if (iVar7 < 0x205ec5c) {
          if (iVar7 < -0x1783ddc) {
            iVar3 = -0x1dab4ba3;
            if ((iVar7 != -0x78b167c) && (iVar3 = iVar7, iVar7 == -0x5ba4f72)) {
              iVar3 = -0x790fd56d;
            }
          }
          else if (iVar7 == -0x1783ddc) {
            local_1d9 = _objc_msgSend(DAT_000a4070,local_1e8,_g_isMirroredMarkfbs);
            iVar3 = 0x3f506569;
          }
          else if (iVar7 == -0xbb019d) {
            _objc_release(local_108);
            _objc_release(local_118);
            iVar3 = -0x35b0b643;
          }
          else if (iVar7 == 0x200322) {
            iVar3 = -0x1d232d73;
          }
        }
        else if (iVar7 < 0x493ee1e) {
          if (iVar7 == 0x205ec5c) {
            _objc_retain(local_1b0);
            _objc_msgSend(local_1b0,"firstObject");
            local_1a8 = _objc_retainAutoreleasedReturnValue();
            local_1a0 = _objc_msgSend(local_1a8,"stringByAppendingPathComponent:",
                                      &cf__w2avfictitious_mov);
            _objc_retain(local_1a0);
            local_191 = _objc_msgSend(local_1c0,local_1e8,local_1a0);
            iVar3 = -0x1918395c;
          }
          else {
            iVar3 = 0x77d9735d;
            if (iVar7 != 0x246b1c0) {
              iVar3 = iVar7;
            }
          }
        }
        else if (iVar7 == 0x493ee1e) {
          local_100 = "stringByAppendingPathComponent:";
          _objc_msgSend(local_108,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          local_f1 = _objc_msgSend(local_120,local_1e8,uVar11);
          _objc_release(uVar11);
          iVar3 = -0x5d5d366b;
        }
        else if (iVar7 == 0x59966cb) {
          _objc_retain(local_d0);
          local_c8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_c8);
          local_c0 = _objc_msgSend(local_c8,local_110);
          _objc_retain(local_c0);
          local_b8 = _objc_msgSend(local_c0,local_c0,local_100,&cf__w2avfictitiousCaches_mov);
          iVar3 = 0x6ba73ea2;
        }
        else if (iVar7 == 0x69fb0ec) {
          local_169 = _objc_msgSend(local_178,local_1e8,_g_tempFilestep2);
          iVar3 = 0x48ecff36;
        }
        goto LAB_00055650;
      }
      if (-0x2ab348e1 < iVar7) {
        if (iVar7 < -0x1dab4ba3) {
          if (iVar7 < -0x2286345a) {
            iVar3 = 0x6b7fed6d;
            if ((iVar7 != -0x2ab348e0) && (iVar3 = iVar7, iVar7 == -0x28204f3c)) {
              iVar3 = -0x17d9e09e;
            }
          }
          else if (iVar7 == -0x2286345a) {
            iVar3 = -0xa33f4a7;
          }
          else if (iVar7 == -0x218f24e5) {
            iVar3 = -0x47b2780a;
          }
          else if (iVar7 == -0x1dc7b0b0) {
            iVar3 = -0x588de6b7;
            if (local_92 == 0) {
              iVar3 = 0x6451a267;
            }
          }
        }
        else if (iVar7 < -0x1d232d73) {
          if (iVar7 == -0x1dab4ba3) {
            _AudioServicesPlaySystemSound(0x5f0);
            iVar3 = -0x4a41b28c;
          }
          else if (iVar7 == -0x1da9c564) {
            local_120 = DAT_000a4070;
            local_118 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            _objc_retain(local_118);
            local_110 = "firstObject";
            local_108 = _objc_msgSend(local_118,"firstObject");
            _objc_retain(local_108);
            iVar3 = -0x555e87c2;
          }
        }
        else if (iVar7 == -0x1d232d73) {
          local_158 = "removeItemAtPath:error:";
          iVar3 = -0x641531d0;
        }
        else {
          iVar3 = -0x49e9471c;
          if ((iVar7 != -0x19871685) && (iVar3 = iVar7, iVar7 == -0x1918395c)) {
            local_210 = local_1b8;
            local_200 = local_1a8;
            local_208 = local_1a0;
            local_1f0 = 0x100000001;
            local_1f4 = 1;
            iVar3 = 0x7bb1ffa8;
            local_1f8 = local_191;
          }
        }
        goto LAB_00055650;
      }
      if (iVar7 < -0x35b0b643) {
        if (iVar7 < -0x39246af1) {
          iVar3 = 0x205ec5c;
          if ((iVar7 != -0x3c3bcd33) && (iVar3 = iVar7, iVar7 == -0x3b77038d)) {
            _objc_msgSend(local_168,local_158,local_160,0);
            iVar3 = 0x25bd92c2;
          }
        }
        else if (iVar7 == -0x39246af1) {
          iVar3 = -0x5853ec17;
        }
        else if (iVar7 == -0x368013ff) {
          iVar3 = 0x1d317671;
          if (local_91 == 0) {
            iVar3 = 0x685f16f6;
          }
        }
        goto LAB_00055650;
      }
      if (-0x33fe2442 < iVar7) {
        iVar3 = 0x4eb55601;
        if (((iVar7 != -0x33fe2441) && (iVar3 = 0x69cd204b, iVar7 != -0x32c85af3)) &&
           (iVar3 = iVar7, iVar7 == -0x3186872d)) {
          iVar3 = 0x3506c97f;
        }
        goto LAB_00055650;
      }
      if (iVar7 == -0x35b0b643) {
        _objc_release(local_108);
        _objc_release(local_118);
        iVar3 = 0x734343c9;
        goto LAB_00055650;
      }
      if (iVar7 != -0x347dc1c2) goto LAB_00055650;
    }
    iVar3 = 0x5e9b6c52;
    goto LAB_00055650;
  }
  if (iVar7 < 0x4eb55601) {
    if (iVar7 < 0x352e462d) {
      if (iVar7 < 0x1f33eabf) {
        if (iVar7 < 0x12871aae) {
          if (iVar7 < 0xf123d98) {
            iVar3 = -0xf9a4dc0;
            if ((iVar7 != 0x749834a) && (iVar3 = iVar7, iVar7 == 0x866ea16)) {
              local_1c0 = DAT_000a4070;
              local_1b8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              iVar3 = 0x57c855a7;
            }
          }
          else {
            iVar3 = -0x418781ae;
            if ((iVar7 != 0xf123d98) && (iVar3 = iVar7, iVar7 == 0x10e42375)) {
              _objc_msgSend(DAT_000a4070,"copyItemAtPath:toPath:error:",_g_tempFile,_g_tempFilestep2
                            ,0);
              local_140 = DAT_000a4070;
              local_150 = _g_tempFile;
              local_148 = "removeItemAtPath:error:";
              iVar3 = -0x4a30325f;
            }
          }
        }
        else if (iVar7 < 0x1b4580e8) {
          iVar3 = 0x25bd92c2;
          if ((iVar7 != 0x12871aae) && (iVar3 = iVar7, iVar7 == 0x130ef8bb)) {
            _objc_release(local_190);
            iVar3 = -0x73721466;
          }
        }
        else if (iVar7 == 0x1b4580e8) {
          local_b0 = local_a0;
          iVar3 = -0x33fe2441;
        }
        else {
          iVar3 = -0x418781ae;
          if ((iVar7 != 0x1ba1e6e0) && (iVar3 = iVar7, iVar7 == 0x1d317671)) goto LAB_000570dc;
        }
      }
      else if (iVar7 < 0x282b5175) {
        if (iVar7 < 0x25bd92c2) {
          iVar3 = -0x218f24e5;
          if ((iVar7 != 0x1f33eabf) && (iVar3 = iVar7, iVar7 == 0x2183f8d7)) {
            _objc_release(local_180);
            iVar3 = 0x4c2ab174;
          }
        }
        else if (iVar7 == 0x25bd92c2) {
          _objc_msgSend(local_168,local_158,local_160,0);
          iVar3 = 0x5047e638;
        }
        else if (iVar7 == 0x2698c2b7) {
          local_1e8 = "fileExistsAtPath:";
          iVar7 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isenabledw2ProChinese);
          iVar3 = 0x32d903d1;
          if (iVar7 == 0) {
            iVar3 = 0x7c24699c;
          }
        }
        else if (iVar7 == 0x27241d4d) {
          iVar3 = 0x5443a593;
          if (local_81 == 0) {
            iVar3 = 0x6b7fed6d;
          }
        }
      }
      else if (iVar7 < 0x2f6f7031) {
        if (iVar7 == 0x282b5175) {
          local_1d8 = DAT_000a4070;
          local_1d0 = _g_tempFile;
          iVar3 = -0x19871685;
        }
        else if (iVar7 == 0x2b5d992d) {
LAB_00056e60:
          iVar3 = -0x423854ab;
        }
      }
      else {
        iVar3 = -0x1048c6c8;
        if (iVar7 != 0x2f6f7031) {
          if (iVar7 == 0x32d903d1) {
            iVar3 = -0xa51e7f3;
          }
          else {
            iVar3 = iVar7;
            if (iVar7 == 0x3506c97f) {
              iVar3 = -0x6108edcc;
            }
          }
        }
      }
    }
    else if (iVar7 < 0x3eb3c2bb) {
      if (iVar7 < 0x38323a5f) {
        if (iVar7 < 0x37bb639c) {
          iVar1 = 0x1b4580e8;
          if (iVar7 != 0x36ef2d4e) {
            iVar1 = iVar7;
          }
          iVar3 = -0x1dc7b0b0;
          if (iVar7 != 0x352e462d) {
            iVar3 = iVar1;
          }
        }
        else {
          iVar3 = 0x4c2ab174;
          if ((iVar7 != 0x37bb639c) && (iVar3 = iVar7, iVar7 == 0x38071ffb)) {
            iVar3 = -0x2286345a;
          }
        }
      }
      else if (iVar7 < 0x39b26b1c) {
        iVar3 = 0x246b1c0;
        if ((iVar7 != 0x38323a5f) && (iVar3 = iVar7, iVar7 == 0x398cfe85)) {
          local_a8 = unaff_x28;
          local_a0 = unaff_x27;
          iVar3 = -0x1783ddc;
        }
      }
      else {
        if (iVar7 == 0x39b26b1c) goto LAB_00056e60;
        iVar3 = 0x631316d4;
        if ((iVar7 != 0x3c5c2c02) && (iVar3 = iVar7, iVar7 == 0x3c9f0e36)) {
          _objc_release(local_a8);
          iVar3 = 0x36ef2d4e;
        }
      }
    }
    else if (iVar7 < 0x433ff10c) {
      if (iVar7 < 0x3f506569) {
        if (iVar7 == 0x3edab11e) {
          local_f0 = DAT_000a4070;
          local_e8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_e8);
          local_e0 = _objc_msgSend(local_e8,local_110);
          _objc_retain(local_e0);
          local_d8 = _objc_msgSend(local_e0,local_e0,local_100,&cf__w2avfictitious_mov);
          local_d0 = local_d8;
          iVar3 = 0x59966cb;
        }
        else if (iVar7 == 0x3f26ea5c) {
          _objc_msgSend(local_1d8,local_1e8,local_1d0);
          iVar3 = -0x49e9471c;
        }
        else if (iVar7 == 0x3eb3c2bb) {
          return;
        }
      }
      else if (iVar7 == 0x3f506569) {
        iVar3 = 0x282b5175;
        if (local_1d9 == '\0') {
          iVar3 = -0x1da9c564;
        }
      }
      else if (iVar7 == 0x42f784bc) {
        iVar3 = -0x4b594795;
      }
    }
    else if (iVar7 < 0x48ecff36) {
      iVar1 = -0x5d269c53;
      if (iVar7 != 0x43a8b996) {
        iVar1 = iVar7;
      }
      iVar3 = 0x5992b7e6;
      if (iVar7 != 0x433ff10c) {
        iVar3 = iVar1;
      }
    }
    else {
      iVar3 = -0x218f24e5;
      if (iVar7 != 0x48ecff36) {
        if (iVar7 == 0x4c2ab174) {
          _objc_release(local_180);
          iVar3 = -0x57f70d6e;
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == 0x4d541737) {
            local_168 = DAT_000a4070;
            local_160 = _g_tempFilestep2;
            iVar3 = -0x39246af1;
          }
        }
      }
    }
    goto LAB_00055650;
  }
  if (iVar7 < 0x6451a267) {
    if (iVar7 < 0x575e0a06) {
      if (iVar7 < 0x52ee992c) {
        if (iVar7 < 0x5047e638) {
          if (iVar7 == 0x4eb55601) {
            _objc_release(local_b0);
            iVar3 = 0x3eb3c2bb;
          }
          else if (iVar7 == 0x50310196) goto LAB_00056d5c;
        }
        else {
          iVar3 = 0x51a4f88d;
          if ((iVar7 != 0x5047e638) && (iVar3 = iVar7, iVar7 == 0x51a4f88d)) {
LAB_00056980:
            iVar3 = 0x10e42375;
          }
        }
      }
      else if (iVar7 < 0x5443a593) {
        iVar3 = -0x35b0b643;
        if ((iVar7 != 0x52ee992c) && (iVar3 = iVar7, iVar7 == 0x53651e93)) {
          iVar3 = -0x7b662f95;
        }
      }
      else if (iVar7 == 0x5443a593) {
        local_188 = local_80;
        iVar3 = -0x32c85af3;
      }
      else if (iVar7 == 0x55c3cee1) {
        _AudioServicesPlaySystemSound(0x44e);
        iVar3 = -0x73246add;
      }
      else if (iVar7 == 0x56bf1790) {
LAB_00056e44:
        iVar3 = -0x67b27419;
      }
      goto LAB_00055650;
    }
    if (0x5ba05ff0 < iVar7) {
      if (iVar7 < 0x5e9b6c52) {
        if (iVar7 == 0x5ba05ff1) {
          _objc_release(local_190);
          iVar3 = 0x130ef8bb;
        }
        else if (iVar7 == 0x5e1257cc) {
          _objc_release(local_a8);
          iVar3 = 0x3c9f0e36;
        }
      }
      else if (iVar7 == 0x5e9b6c52) {
        _objc_retain(local_128);
        _objc_msgSend(local_128,local_128,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov)
        ;
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_138,local_148,uVar11,0);
        _objc_release(uVar11);
        _objc_release(local_128);
        _objc_release(local_130);
        iVar3 = -0x7bd0d950;
      }
      else {
        iVar3 = 0x4d541737;
        if ((iVar7 != 0x61cfdf18) && (iVar3 = iVar7, iVar7 == 0x631316d4)) {
          iVar3 = 0x27241d4d;
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 < 0x5992b7e6) {
      if (iVar7 == 0x575e0a06) {
        local_1f0 = 0;
        iVar3 = 0x7bb1ffa8;
        if (local_1c1 == '\0') {
          iVar3 = 0x5a760424;
        }
        local_1f8 = 1;
        local_1f4 = 0;
      }
      else {
        iVar3 = 0x2b5d992d;
        if (iVar7 != 0x57c855a7) {
          iVar3 = iVar7;
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 == 0x5992b7e6) {
      iVar3 = -0x368013ff;
      goto LAB_00055650;
    }
    if (iVar7 == 0x5a525d91) {
      local_190 = local_90;
      iVar3 = 0x66d0dc84;
      goto LAB_00055650;
    }
    if (iVar7 != 0x5a760424) goto LAB_00055650;
  }
  else {
    if (iVar7 < 0x71240394) {
      if (iVar7 < 0x69cd204b) {
        if (iVar7 < 0x66d514b4) {
          iVar1 = 0x74a64cdd;
          if (iVar7 != 0x66d0dc84) {
            iVar1 = iVar7;
          }
          iVar3 = -0x73246add;
          if (iVar7 != 0x6451a267) {
            iVar3 = iVar1;
          }
        }
        else if (iVar7 == 0x66d514b4) {
          iVar3 = -0x3c3bcd33;
        }
        else if (iVar7 == 0x685f16f6) {
          iVar3 = 0x631316d4;
        }
      }
      else if (iVar7 < 0x6ba73ea2) {
        if (iVar7 == 0x69cd204b) {
          _objc_release(local_188);
          iVar3 = -0x786be3bd;
        }
        else if (iVar7 == 0x6b7fed6d) {
          iVar3 = -0x1048c6c8;
        }
      }
      else {
        if (iVar7 == 0x6ba73ea2) {
          _objc_msgSend(local_b8,local_f0,"copyItemAtPath:toPath:error:",local_d8,local_b8,0);
          _objc_release(local_c0);
          _objc_release(local_c8);
          _objc_release(local_d0);
          _objc_release(local_e0);
          _objc_release(local_e8);
          uVar11 = DAT_000a4070;
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,local_110);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar9,local_100,&cf__w2avfictitious_mov);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar11,"removeItemAtPath:error:",uVar10,0);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          goto LAB_00056e44;
        }
        iVar3 = -0x7b662f95;
        if ((iVar7 != 0x6ba8f239) && (iVar3 = iVar7, iVar7 == 0x6f60e6ce)) {
          _objc_msgSend(local_108,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_120,local_1e8,uVar11);
          _objc_release(uVar11);
          iVar3 = 0x493ee1e;
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 < 0x77d9735d) {
      if (iVar7 < 0x74a64cdd) {
        iVar3 = 0x3506c97f;
        if (((iVar7 != 0x71240394) && (iVar3 = iVar7, iVar7 == 0x734343c9)) &&
           (iVar3 = 0x3edab11e, local_f1 == '\0')) {
          iVar3 = -0x67b27419;
        }
      }
      else {
        iVar3 = 0x130ef8bb;
        if (iVar7 != 0x74a64cdd) {
          if (iVar7 == 0x75171ae6) {
            unaff_x27 = &cf_Disabledsuccess;
            unaff_x28 = &cf_NotEnabled;
            iVar3 = 0x398cfe85;
          }
          else {
            iVar3 = iVar7;
            if (iVar7 == 0x7712c259) {
              _objc_msgSend(DAT_000a4070,"copyItemAtPath:toPath:error:",_g_tempFile,_g_tempFilestep2
                            ,0);
              goto LAB_00056980;
            }
          }
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 < 0x7bb1ffa8) {
      iVar3 = 0x685f16f6;
      if (((iVar7 != 0x77d9735d) && (iVar3 = iVar7, iVar7 == 0x7a8d9f6e)) &&
         (iVar3 = -0x70673f77, local_71 == 0)) {
        iVar3 = -0x1dc7b0b0;
      }
      goto LAB_00055650;
    }
    if (iVar7 == 0x7bb1ffa8) {
      local_92 = local_1f8 & 1;
      local_91 = (byte)((ulong)local_1f0 >> 0x20) & 1;
      local_90 = local_208;
      local_81 = (byte)local_1f0 & 1;
      local_80 = local_200;
      local_71 = local_1f4 & 1;
      local_70 = local_210;
      iVar3 = 0x5992b7e6;
      goto LAB_00055650;
    }
    iVar3 = -0x2286345a;
    if ((iVar7 == 0x7c24699c) || (iVar3 = iVar7, iVar7 != 0x7c55cbe8)) goto LAB_00055650;
    _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  }
  iVar3 = 0x866ea16;
  goto LAB_00055650;
}
