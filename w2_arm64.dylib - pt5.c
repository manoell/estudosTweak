void FUN_00057264(void)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  cfstringStruct *unaff_x27;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  char local_e2;
  char local_e1;
  undefined8 local_e0;
  char local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  
  iVar3 = -0x7529ff62;
LAB_000572d4:
  iVar8 = iVar3;
  iVar3 = iVar8;
  if (iVar8 < 0x3e77bf2) {
    if (iVar8 < -0x33971db8) {
      if (-0x63010058 < iVar8) {
        if (iVar8 < -0x41cb28bf) {
          if (iVar8 < -0x5858b728) {
            if (iVar8 == -0x63010057) {
              _objc_release(local_78);
              iVar3 = -0x66382a70;
            }
            else {
              pcVar1 = &cf_Enabledsuccess;
              if (iVar8 != -0x58a3d381) {
                pcVar1 = unaff_x27;
              }
              unaff_x27 = pcVar1;
              iVar3 = -0x333fb5c9;
              if (iVar8 != -0x58a3d381) {
                iVar3 = iVar8;
              }
            }
            goto LAB_000572d4;
          }
          if (iVar8 == -0x5858b728) {
            local_e0 = DAT_000a4070;
            iVar3 = 0x73d4f1c7;
            goto LAB_000572d4;
          }
          if (iVar8 != -0x58375705) {
            if (iVar8 == -0x4211fce8) goto LAB_00057ea0;
            goto LAB_000572d4;
          }
          bVar2 = local_d1 == '\0';
          iVar3 = 0x3d67c4b0;
        }
        else {
          if (iVar8 < -0x3ba69ede) {
            if (iVar8 == -0x41cb28bf) {
              uVar4 = _objc_retain(local_80);
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,local_c0);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar6,local_b0,&cf__w2avfictitious_mov);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_98,"copyItemAtPath:toPath:error:",local_80,uVar7,0);
              _objc_release(uVar4);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(local_88);
              _objc_release(local_90);
              uVar4 = DAT_000a4070;
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,local_c0);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar6,local_b0,&cf__w2avfictitiousCaches_mov);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar4,"removeItemAtPath:error:",uVar7,0);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
LAB_0005808c:
              iVar3 = -0x176e96b6;
            }
            else {
              iVar3 = -0x5858b728;
              if (iVar8 != -0x3d9060dd) {
                iVar3 = iVar8;
              }
            }
            goto LAB_000572d4;
          }
          if (iVar8 != -0x3ba69ede) {
            iVar9 = -0x3a2c484e;
            iVar3 = -0x2c80622e;
            bVar2 = iVar8 == -0x37a65032;
            iVar10 = -0x58a3d381;
            goto LAB_00057bdc;
          }
          _objc_retain(local_a0);
          iVar3 = _objc_msgSend(local_d0,local_f0,local_a8);
          _objc_release(local_a0);
          _objc_release(local_b8);
          _objc_release(local_c8);
          bVar2 = iVar3 == 0;
          iVar3 = 0xdda513c;
        }
        if (bVar2) {
          iVar3 = 0x6d6f5f56;
        }
        goto LAB_000572d4;
      }
      if (-0x6edad8d9 < iVar8) {
        if (iVar8 < -0x6730b6b9) {
          if (iVar8 == -0x6edad8d8) {
            local_98 = DAT_000a4070;
            iVar3 = 0x54a87960;
          }
          else {
            iVar3 = 0x6d6f5f56;
            if (iVar8 != -0x6e5b41e4) {
              iVar3 = iVar8;
            }
          }
        }
        else {
          iVar3 = -0x63010057;
          if (iVar8 != -0x6730b6b9) {
            if (iVar8 == -0x66382a70) {
              iVar3 = 0x7c5de0c8;
            }
            else {
              iVar3 = iVar8;
              if (iVar8 == -0x656cd204) {
                iVar3 = -0x3a2c484e;
              }
            }
          }
        }
        goto LAB_000572d4;
      }
      if (-0x74d46b99 < iVar8) {
        if (iVar8 == -0x74d46b98) {
          iVar3 = -0xda154d9;
        }
        else if (iVar8 == -0x73bd2080) {
          local_100 = DAT_000a4070;
          local_f8 = _g_isenabledw2ProChinese;
          local_f0 = "fileExistsAtPath:";
          iVar3 = 0x4cda5584;
        }
        goto LAB_000572d4;
      }
      iVar9 = -0x7cd846ed;
      iVar3 = -0x2210a180;
      bVar2 = iVar8 == -0x7529ff62;
      iVar10 = -0x73bd2080;
    }
    else if (iVar8 < -0x1884ad1a) {
      if (iVar8 < -0x2c80622e) {
        if (iVar8 < -0x3272d2e8) {
          iVar3 = -0x5858b728;
          if ((iVar8 != -0x33971db8) && (iVar3 = iVar8, iVar8 == -0x333fb5c9)) {
            local_70 = unaff_x27;
            iVar3 = 0xd0ba476;
          }
        }
        else {
          iVar3 = 0xa463e65;
          if ((iVar8 != -0x3272d2e8) && (iVar3 = iVar8, iVar8 == -0x31e5a411)) {
            local_d1 = _objc_msgSend(local_e0,local_f0,_g_tempFilestep2);
            iVar3 = 0x21d552e;
          }
        }
        goto LAB_000572d4;
      }
      if (-0x2a7a843f < iVar8) {
        if (iVar8 == -0x2a7a843e) {
          _objc_msgSend(local_e0,local_f0,_g_tempFilestep2);
          iVar3 = -0x31e5a411;
        }
        else if (iVar8 == -0x2876e6ec) {
          _objc_release(local_78);
          iVar3 = -0x63010057;
        }
        else if (iVar8 == -0x2210a180) goto LAB_0005808c;
        goto LAB_000572d4;
      }
      iVar9 = -0x2c80622e;
      iVar3 = 0x4c04537d;
      bVar2 = iVar8 == -0x2bc82214;
      iVar10 = -0x58375705;
    }
    else {
      if (-0x1b95d4f < iVar8) {
        if (iVar8 < 0x626326) {
          pcVar1 = &cf__;
          if (iVar8 != -0x5bfb40) {
            pcVar1 = unaff_x27;
          }
          iVar10 = -0x333fb5c9;
          if (iVar8 != -0x5bfb40) {
            iVar10 = iVar8;
          }
          iVar3 = 0x2124e4f6;
          if (iVar8 != -0x1b95d4e) {
            unaff_x27 = pcVar1;
            iVar3 = iVar10;
          }
        }
        else {
          iVar3 = 0x5b78a8be;
          if (iVar8 != 0x626326) {
            if (iVar8 == 0x1ba8e8b) {
              local_e2 = _objc_msgSend(local_100,local_f0,local_f8);
              iVar3 = 0x72f1750c;
            }
            else {
              iVar3 = 0x7ad4e2fc;
              if (iVar8 != 0x21d552e) {
                iVar3 = iVar8;
              }
            }
          }
        }
        goto LAB_000572d4;
      }
      if (-0x176e96b7 < iVar8) {
        if (iVar8 == -0x176e96b6) {
          uVar4 = _objc_retain(local_80);
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,local_c0);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,local_b0,&cf__w2avfictitious_mov);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_98,"copyItemAtPath:toPath:error:",local_80,uVar7,0);
          _objc_release(uVar4);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(local_88);
          _objc_release(local_90);
          uVar4 = DAT_000a4070;
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,local_c0);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,local_b0,&cf__w2avfictitiousCaches_mov);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"removeItemAtPath:error:",uVar7,0);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          iVar3 = -0x6e5b41e4;
        }
        else if (iVar8 == -0xda154d9) {
          local_78 = local_70;
          iVar3 = -0x1884ad1a;
        }
        else if (iVar8 == -0x9d4e8c3) {
          local_d0 = DAT_000a4070;
          iVar3 = 0x3e77bf2;
        }
        goto LAB_000572d4;
      }
      iVar9 = -0x1884ad1a;
      iVar3 = -0x6730b6b9;
      bVar2 = iVar8 == -0x17855a10;
      iVar10 = 0x2c8126c1;
    }
  }
  else {
    if (iVar8 < 0x49c3f81b) {
      if (iVar8 < 0x2124e4f6) {
        if (iVar8 < 0xaa67184) {
          if (iVar8 < 0x655ef4b) {
            if (iVar8 == 0x3e77bf2) {
              local_c8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              _objc_retain(local_c8);
              local_c0 = "firstObject";
              local_b8 = _objc_msgSend(local_c8,"firstObject");
              _objc_retain(local_b8);
              local_b0 = "stringByAppendingPathComponent:";
              local_a8 = _objc_msgSend(local_b8,"stringByAppendingPathComponent:",
                                       &cf__w2avfictitiousCaches_mov);
              local_a0 = local_a8;
              iVar3 = -0x3ba69ede;
            }
            else {
              iVar3 = 0x5b78a8be;
              if (iVar8 != 0x4676450) {
                iVar3 = iVar8;
              }
            }
          }
          else if (iVar8 == 0x655ef4b) {
            _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_c0);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_b0,&cf__w2avfictitiousCaches_mov);
            iVar3 = 0x2c8126c1;
          }
          else {
            iVar3 = -0x5bfb40;
            if (iVar8 != 0xa463e65) {
              iVar3 = iVar8;
            }
          }
        }
        else if (iVar8 < 0xdda513c) {
          iVar3 = 0xa463e65;
          if ((iVar8 != 0xaa67184) && (iVar3 = iVar8, iVar8 == 0xd0ba476)) {
            _AudioServicesPlaySystemSound(0x5f0);
            local_e1 = _objc_msgSend(DAT_000a4070,local_f0,_g_isMirroredMarkfbs);
            iVar3 = 0x23a92e2a;
          }
        }
        else {
          iVar3 = -0x6edad8d8;
          if (((iVar8 != 0xdda513c) && (iVar3 = 0x7ff53a41, iVar8 != 0x1010a78a)) &&
             (iVar3 = iVar8, iVar8 == 0x17a428d8)) {
            _objc_msgSend(DAT_000a4070,"removeItemAtPath:error:",_g_tempFilestep2,0);
            iVar3 = 0x4676450;
          }
        }
      }
      else if (iVar8 < 0x2c8126c1) {
        if (iVar8 < 0x23a92e2a) {
          iVar9 = 0x2124e4f6;
          iVar3 = 0x5e0b02d8;
          bVar2 = iVar8 == 0x22762735;
          iVar10 = -0x37a65032;
          goto LAB_00057bdc;
        }
        if (iVar8 == 0x23a92e2a) {
          iVar3 = -0x3d9060dd;
          if (local_e1 == '\0') {
            iVar3 = -0x9d4e8c3;
          }
        }
        else if (iVar8 == 0x263cbaeb) {
          _AudioServicesPlaySystemSound(0x5f0);
          _objc_msgSend(DAT_000a4070,local_f0,_g_isMirroredMarkfbs);
          iVar3 = 0xd0ba476;
        }
        else if (iVar8 == 0x29ea910b) {
          iVar3 = -0x6edad8d8;
        }
      }
      else if (iVar8 < 0x3b7003b8) {
        if (iVar8 == 0x2c8126c1) {
          local_90 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_90);
          local_88 = _objc_msgSend(local_90,local_c0);
          _objc_retain(local_88);
          local_80 = _objc_msgSend(local_88,local_88,local_b0,&cf__w2avfictitiousCaches_mov);
          iVar3 = -0x7cd846ed;
        }
        else {
          iVar3 = -0x31e5a411;
          if (iVar8 != 0x2e4057c9) {
            iVar3 = iVar8;
          }
        }
      }
      else {
        iVar3 = 0x6d6f5f56;
        if (iVar8 != 0x3b7003b8) {
          if (iVar8 == 0x3d67c4b0) {
            _objc_msgSend(DAT_000a4070,"copyItemAtPath:toPath:error:",_g_tempFilestep2,_g_tempFile,0
                         );
            iVar3 = 0x17a428d8;
          }
          else {
            iVar3 = iVar8;
            if (iVar8 == 0x401e045a) {
              iVar3 = -0x73bd2080;
            }
          }
        }
      }
      goto LAB_000572d4;
    }
    iVar3 = -0x1b95d4e;
    if (0x6cb2956b < iVar8) {
      if (iVar8 < 0x791f4d69) {
        iVar10 = 0x2e4057c9;
        if (iVar8 != 0x73d4f1c7) {
          iVar10 = iVar8;
        }
        iVar9 = 0x1010a78a;
        if (iVar8 != 0x72f1750c) {
          iVar9 = iVar10;
        }
        if (iVar8 != 0x6df3a353) {
          iVar3 = iVar9;
        }
        iVar10 = -0xda154d9;
        if (iVar8 != 0x6d6f5f56) {
          iVar10 = iVar8;
        }
        iVar9 = 0x7ff53a41;
        if (iVar8 != 0x6cb2956c) {
          iVar9 = iVar10;
        }
        if (iVar8 < 0x6df3a353) {
          iVar3 = iVar9;
        }
      }
      else if (iVar8 < 0x7c5de0c8) {
        iVar10 = -0x2bc82214;
        if (iVar8 != 0x7ad4e2fc) {
          iVar10 = iVar8;
        }
        iVar3 = -0x2bc82214;
        if (iVar8 != 0x791f4d69) {
          iVar3 = iVar10;
        }
      }
      else if (iVar8 == 0x7f95c53b) {
        _objc_msgSend(local_100,local_f0,local_f8);
LAB_00057ea0:
        iVar3 = 0x1ba8e8b;
      }
      else if (iVar8 == 0x7ff53a41) {
        iVar3 = 0x49c3f81b;
      }
      else {
        iVar3 = iVar8;
        if (iVar8 == 0x7c5de0c8) {
          return;
        }
      }
      goto LAB_000572d4;
    }
    if (0x54a8795f < iVar8) {
      if (iVar8 < 0x5e0b02d8) {
        iVar9 = 0x54a87960;
        iVar3 = -0x17855a10;
        bVar2 = iVar8 == 0x5b78a8be;
        iVar10 = 0x3b7003b8;
        goto LAB_00057bdc;
      }
      if (iVar8 == 0x5e0b02d8) {
        iVar3 = 0x22762735;
      }
      else {
        iVar3 = -0x3a2c484e;
        if ((iVar8 != 0x6387602c) && (iVar3 = iVar8, iVar8 == 0x64e1b89c)) {
          iVar3 = -0x37a65032;
        }
      }
      goto LAB_000572d4;
    }
    if (iVar8 < 0x4c04537d) {
      if (iVar8 == 0x49c3f81b) {
        iVar3 = -0x656cd204;
        if (local_e2 == '\0') {
          iVar3 = 0x6df3a353;
        }
      }
      else if (iVar8 != 0x4bd16d76) {
        iVar3 = iVar8;
      }
      goto LAB_000572d4;
    }
    iVar9 = 0x4c04537d;
    iVar3 = -0x3272d2e8;
    bVar2 = iVar8 == 0x4cda5584;
    iVar10 = -0x4211fce8;
  }
LAB_00057bdc:
  if (!bVar2) {
    iVar10 = iVar8;
  }
  if (iVar8 != iVar9) {
    iVar3 = iVar10;
  }
  goto LAB_000572d4;
}



void FUN_0005817c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  char *local_70;
  undefined *local_68;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_retain(uVar1);
  uVar2 = _objc_msgSend(uVar1,"keyWindow");
  _objc_retain(uVar2);
  uVar6 = _objc_msgSend(uVar2,"bounds");
  uVar5 = 0x20c55607;
  do {
    while( true ) {
      while (uVar5 < 0x2f98b09e) {
        if (uVar5 == 0x20c55607) {
          local_70 = "setFrame:";
          _objc_msgSend(uVar6,param_2,param_3,param_4,DAT_000a4078,"setFrame:");
          _objc_release(uVar2);
          _objc_release(uVar1);
          local_68 = &_OBJC_CLASS___UIApplication;
          uVar5 = 0x2f98b09e;
        }
        else if (uVar5 == 0x2333f31d) {
          _objc_msgSend(local_68,"sharedApplication");
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar3,"keyWindow");
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"bounds");
          _objc_msgSend(_g_maskLayer,local_70);
          _objc_release(uVar4);
          _objc_release(uVar3);
          uVar5 = 0x33f4b5a9;
        }
      }
      if (uVar5 != 0x2f98b09e) break;
      uVar5 = 0x2333f31d;
    }
  } while (uVar5 != 0x33f4b5a9);
  return;
}



void FUN_0005834c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long unaff_x24;
  char local_49;
  long local_48;
  
  _objc_retain(param_3);
  lVar2 = _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",param_2,1);
  iVar1 = 0x63d7c45d;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, 0x1caf6d7d < iVar3) {
          if (iVar3 < 0x42e1e1b5) {
            if (iVar3 < 0x2d432546) {
              iVar1 = 0x5c1aae8;
              if (((iVar3 != 0x1caf6d7e) && (iVar1 = iVar3, iVar3 == 0x2b663b9a)) &&
                 (unaff_x24 = param_2, iVar1 = -0x6ca5841e, local_49 == '\0')) {
                iVar1 = 0x7fe2a45b;
              }
            }
            else if (iVar3 == 0x2d432546) {
              iVar1 = -0x3d7fc79a;
            }
            else {
              iVar1 = 0x5704c19;
              if (iVar3 != 0x3e8d2cea) {
                iVar1 = iVar3;
              }
            }
          }
          else if (iVar3 < 0x63d7c45d) {
            if (iVar3 == 0x42e1e1b5) {
              (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                        (*(long *)(param_1 + 0x20),local_48,param_3);
              DAT_000a40a8 = 0;
              _objc_release(param_3);
              iVar1 = 0x6e2a6af2;
            }
            else {
              iVar1 = -0x146fba93;
              if (iVar3 != 0x57f188f4) {
                iVar1 = iVar3;
              }
            }
          }
          else {
            iVar1 = -0x3d7fc79a;
            if (iVar3 != 0x63d7c45d) {
              if (iVar3 == 0x7fe2a45b) {
                iVar1 = 0x42e1e1b5;
                local_48 = unaff_x24;
              }
              else {
                iVar1 = iVar3;
                if (iVar3 == 0x6e2a6af2) {
                  return;
                }
              }
            }
          }
        }
        if (iVar3 < -0x146fba93) break;
        if (iVar3 < 0x5c1aae8) {
          iVar4 = 0x5c1aae8;
          if (iVar3 != 0x5704c19) {
            iVar4 = iVar3;
          }
          iVar1 = 0xd782f0c;
          if (iVar3 != -0x146fba93) {
            iVar1 = iVar4;
          }
        }
        else if (iVar3 == 0x5c1aae8) {
          iVar1 = 0x2b663b9a;
        }
        else {
          iVar1 = iVar3;
          if (iVar3 == 0xd782f0c) {
            unaff_x24 = lVar2;
            iVar1 = 0x7fe2a45b;
          }
        }
      }
      if (-0x3d7fc79b < iVar3) break;
      if (iVar3 == -0x7a081069) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_48,param_3);
        DAT_000a40a8 = 0;
        _objc_release(param_3);
        iVar1 = 0x42e1e1b5;
      }
      else {
        iVar4 = -0x6ca5841e;
LAB_00058538:
        iVar1 = 0x57f188f4;
        if (iVar3 != iVar4) {
          iVar1 = iVar3;
        }
      }
    }
    if (iVar3 != -0x3d7fc79a) {
      iVar4 = -0x30bfb2ac;
      goto LAB_00058538;
    }
    local_49 = lVar2 != 0;
    iVar1 = 0x3e8d2cea;
  } while( true );
}



void FUN_00058670(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar2 = -0x6b45f01d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, -0x135cd7ad < iVar3) {
            if (iVar3 < 0x34d21401) {
              if (iVar3 == -0x135cd7ac) {
                __Block_object_assign(local_70,local_68,7);
                iVar2 = -0x580da8e9;
              }
              else {
                iVar2 = -0x135cd7ac;
                if (iVar3 != 0x69a6886) {
                  iVar2 = iVar3;
                }
              }
            }
            else if (iVar3 == 0x34d21401) {
              iVar2 = -0x2fc64d6d;
            }
            else if (iVar3 == 0x66f0cb93) {
              local_68 = *(void **)(param_2 + 0x20);
              iVar2 = -0x3a1778e6;
              local_70 = (void *)(param_1 + 0x20);
            }
          }
          if (iVar3 < -0x3a1778e6) break;
          iVar1 = -0x750c36d9;
          if (iVar3 != -0x2fc64d6d) {
            iVar1 = iVar3;
          }
          iVar2 = 0x69a6886;
          if (iVar3 != -0x3a1778e6) {
            iVar2 = iVar1;
          }
        }
        if (iVar3 != -0x6b45f01d) break;
        iVar2 = 0x66f0cb93;
      }
      if (iVar3 != -0x580da8e9) break;
      iVar2 = 0x34d21401;
    }
  } while (iVar3 != -0x750c36d9);
  return;
}



void FUN_000587e4(void)

{
                    // WARNING: Could not recover jumptable at 0x0005882c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a32f0)();
  return;
}



void FUN_00059a30(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_8;
  
  puVar1 = (undefined8 *)(param_2 + 0x28);
  iVar2 = -0x41103553;
  do {
    while( true ) {
      while (iVar2 < 0x10ae7a13) {
        if (iVar2 == -0x41103553) goto LAB_00059afc;
        if (iVar2 == -0x3855b652) {
          iVar2 = 0x6824ac4;
        }
        else if (iVar2 == 0x6824ac4) {
          *local_8 = 0;
          iVar2 = 0x7c5cf131;
        }
      }
      if (0x46b1605a < iVar2) break;
      if (iVar2 == 0x10ae7a13) {
        *(undefined8 *)(param_1 + 0x28) = *puVar1;
LAB_00059afc:
        iVar2 = 0x46b1605b;
      }
      else if (iVar2 == 0x12a16a76) {
        iVar2 = -0x3855b652;
      }
    }
    if (iVar2 == 0x7c5cf131) {
      return;
    }
    if (iVar2 == 0x46b1605b) {
      *(undefined8 *)(param_1 + 0x28) = *puVar1;
      iVar2 = 0x12a16a76;
      local_8 = puVar1;
    }
  } while( true );
}



void FUN_00059b3c(long param_1)

{
  int iVar1;
  int iVar2;
  long local_30;
  undefined8 local_28;
  
  iVar1 = -0x3dcf9a7;
  do {
    while( true ) {
      while (iVar2 = iVar1, iVar2 < -0x470b128) {
        if (iVar2 < -0x21ec3ecb) {
          if (iVar2 == -0x7752de8c) {
            iVar1 = 0x5162c4d2;
          }
          else {
            iVar1 = 0x5aee3dc1;
            if ((iVar2 != -0x530f7c26) && (iVar1 = iVar2, iVar2 == -0x3fb05978)) {
              local_30 = param_1;
              iVar1 = -0x7752de8c;
            }
          }
        }
        else if (iVar2 == -0x21ec3ecb) {
          _objc_release(local_28);
          iVar1 = 0x5aee3dc1;
        }
        else if (iVar2 == -0xc1fd8da) {
          local_28 = *(undefined8 *)(local_30 + 0x28);
          iVar1 = -0xa8c9139;
        }
        else {
          iVar1 = -0x530f7c26;
          if (iVar2 != -0xa8c9139) {
            iVar1 = iVar2;
          }
        }
      }
      if (iVar2 < 0x414f8e71) break;
      if (iVar2 == 0x414f8e71) {
        iVar1 = -0xc1fd8da;
      }
      else {
        iVar1 = -0xc1fd8da;
        if ((iVar2 != 0x5162c4d2) && (iVar1 = iVar2, iVar2 == 0x5aee3dc1)) {
          _objc_release(local_28);
          iVar1 = -0x470b128;
        }
      }
    }
    iVar1 = -0x3fb05978;
  } while (((iVar2 == -0x3dcf9a7) || (iVar1 = -0x3fb05978, iVar2 == 0x39129e05)) ||
          (iVar1 = iVar2, iVar2 != -0x470b128));
  return;
}



undefined8 FUN_00059d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_x24;
  long local_d0;
  char *local_c8;
  char local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  char local_89;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  iVar4 = 0x5dd69c49;
LAB_00059d70:
  do {
    while (iVar2 = iVar4, iVar4 = iVar2, iVar2 < 0x1c9eca2a) {
      if (iVar2 < -0x3c705519) {
        if (iVar2 < -0x5591ccb3) {
          if (iVar2 < -0x76885682) {
            if (iVar2 == -0x7be8e73e) {
              local_88 = (long *)(*(long *)(local_d0 + 0x20) + 8);
              iVar4 = -0x425eeccd;
            }
            else {
              iVar3 = -0x7af136de;
              iVar4 = 0x3501160b;
              iVar5 = -0x2a70b153;
              if (iVar2 != -0x76dd35aa) {
                iVar5 = iVar2;
              }
LAB_0005a308:
              if (iVar2 != iVar3) {
                iVar4 = iVar5;
              }
            }
          }
          else if (iVar2 == -0x76885682) {
            iVar4 = -0x4ae7e783;
          }
          else {
            iVar4 = -0x4dd8ee4e;
            if ((iVar2 != -0x6c256bd3) && (iVar4 = iVar2, iVar2 == -0x6a3e1ad4)) {
              local_98 = _g_tempFile;
              iVar4 = 0x6494cd25;
            }
          }
        }
        else if (iVar2 < -0x442c68fb) {
          iVar4 = -0x76885682;
          if (iVar2 != -0x5591ccb3) {
            if (iVar2 == -0x4dd8ee4e) {
              local_b8 = DAT_000a4070;
              local_b0 = _g_isMirroredMarkfbs;
              iVar4 = -0x7af136de;
            }
            else {
              iVar4 = iVar2;
              if (iVar2 == -0x4ae7e783) {
                iVar4 = -0x76dd35aa;
                if (local_a1 == '\0') {
                  iVar4 = -0x2a98be71;
                }
              }
            }
          }
        }
        else {
          if (iVar2 != -0x442c68fb) {
            iVar3 = -0x425eeccd;
            iVar4 = -0x1f291b7d;
            iVar1 = -0x3ed94939;
            iVar5 = 0x5a91a16f;
            goto LAB_0005a304;
          }
          _objc_retain(local_80);
          iVar4 = -0x4067bea;
        }
      }
      else if (iVar2 < -0x25e07af4) {
        if (iVar2 < -0x2bed26bf) {
          if (iVar2 == -0x3c705519) {
            _objc_retain(param_3);
            _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_tempFile);
            iVar4 = -0xfa5e563;
          }
          else if (iVar2 == -0x34563875) {
            (*(code *)*local_70)(param_2,"fileDataRepresentationWithCustomizer:",param_3);
            unaff_x24 = _objc_retainAutoreleasedReturnValue();
            iVar4 = 0x2023957c;
          }
          else if (iVar2 == -0x304f9439) {
            _objc_release(param_3);
            _objc_release(param_2);
            _objc_autorelease(local_68);
            iVar4 = 0x209401aa;
          }
        }
        else if (iVar2 == -0x2bed26bf) {
          local_80 = *(undefined8 *)(*local_88 + 0x28);
          iVar4 = -0x3ed94939;
        }
        else if (iVar2 == -0x2a98be71) {
          local_78 = (long *)(local_d0 + 0x28);
          iVar4 = 0x65e9d62d;
        }
        else if (iVar2 == -0x2a70b153) {
          local_a0 = DAT_000a4070;
          iVar4 = 0x790c7195;
        }
      }
      else if (iVar2 < -0x19459f10) {
        if (iVar2 == -0x25e07af4) {
          local_a1 = _objc_msgSend(local_b8,local_c8,local_b0);
          iVar4 = 0x1cdd7277;
        }
        else {
          iVar4 = -0x2bed26bf;
          if (((iVar2 != -0x1f291b7d) && (iVar4 = iVar2, iVar2 == -0x19f0d11a)) &&
             (iVar4 = 0x37388125, local_b9 == '\0')) {
            iVar4 = -0x6c256bd3;
          }
        }
      }
      else if (iVar2 < -0x4067bea) {
        iVar4 = 0x42eaef8a;
        if ((iVar2 != -0x19459f10) && (iVar4 = iVar2, iVar2 == -0xfa5e563)) {
          _objc_retain(param_3);
          local_c8 = "fileExistsAtPath:";
          local_b9 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_tempFile);
          iVar4 = -0x19f0d11a;
        }
      }
      else if (iVar2 == -0x4067bea) {
        unaff_x24 = local_80;
        iVar4 = 0x2023957c;
      }
      else if (iVar2 == 0x1c76cfe9) {
        _objc_release(param_3);
        _objc_release(param_2);
        _objc_autorelease(local_68);
        iVar4 = -0x304f9439;
      }
    }
    iVar4 = -0x6a3e1ad4;
    if (iVar2 < 0x5446ca98) {
      if (iVar2 < 0x3b1954ff) {
        if (iVar2 < 0x2023957c) {
          iVar4 = -0x76885682;
          if (iVar2 != 0x1c9eca2a) {
            if (iVar2 == 0x1cdd7277) {
              iVar4 = 0x1c9eca2a;
            }
            else {
              iVar4 = iVar2;
              if (iVar2 == 0x1ff3f470) {
                iVar4 = -0x7be8e73e;
              }
            }
          }
        }
        else if (iVar2 < 0x3501160b) {
          if (iVar2 == 0x2023957c) {
            local_68 = unaff_x24;
            iVar4 = -0x304f9439;
          }
          else {
            iVar4 = iVar2;
            if (iVar2 == 0x209401aa) {
              return local_68;
            }
          }
        }
        else {
          iVar3 = -0x7be8e73e;
          if (iVar2 != 0x37388125) {
            iVar3 = iVar2;
          }
          iVar4 = -0x25e07af4;
          if (iVar2 != 0x3501160b) {
            iVar4 = iVar3;
          }
        }
      }
      else if (iVar2 < 0x4bbf2839) {
        if (iVar2 == 0x3b1954ff) {
          iVar4 = 0x4bbf2839;
        }
        else if (iVar2 == 0x42eaef8a) {
          local_89 = _objc_msgSend(local_a0,local_c8,local_98);
          iVar4 = 0x6fdec0df;
        }
        else {
          iVar4 = -0x2a70b153;
          if (iVar2 != 0x46b81df1) {
            iVar4 = iVar2;
          }
        }
      }
      else if (iVar2 == 0x4bbf2839) {
        local_70 = (undefined8 *)(*(long *)(*local_78 + 8) + 0x18);
        iVar4 = 0x7c08088c;
      }
      else if (iVar2 == 0x4d531b6b) {
        _objc_msgSend(local_b8,local_c8,local_b0);
        iVar4 = -0x25e07af4;
      }
      else if (iVar2 != 0x4ffb911e) {
        iVar4 = iVar2;
      }
      goto LAB_00059d70;
    }
    if (iVar2 < 0x65e9d62d) {
      if (iVar2 < 0x5acd971a) {
        if (iVar2 == 0x5446ca98) {
          _objc_retain(local_80);
          iVar4 = -0x442c68fb;
        }
        else {
          iVar3 = -0x442c68fb;
          if (iVar2 != 0x5a91a16f) {
            iVar3 = iVar2;
          }
          if (iVar2 != 0x54ad1341) {
            iVar4 = iVar3;
          }
        }
      }
      else if (iVar2 == 0x5acd971a) {
        iVar4 = -0x2bed26bf;
      }
      else if (iVar2 == 0x5dd69c49) {
        _objc_retain(param_2);
        local_d0 = param_1;
        iVar4 = 0x71f1d4c9;
      }
      else {
        iVar4 = -0x19459f10;
        if (iVar2 != 0x6494cd25) {
          iVar4 = iVar2;
        }
      }
    }
    else if (iVar2 < 0x7065a1f0) {
      iVar4 = 0x4bbf2839;
      if (((iVar2 != 0x65e9d62d) && (iVar4 = -0x4dd8ee4e, iVar2 != 0x67f46c42)) &&
         ((iVar4 = iVar2, iVar2 == 0x6fdec0df && (iVar4 = 0x37388125, local_89 == '\0')))) {
        iVar4 = -0x2a98be71;
      }
    }
    else {
      if (0x790c7194 < iVar2) {
        iVar3 = 0x790c7195;
        iVar4 = 0x4ffb911e;
        iVar1 = 0x7c08088c;
        iVar5 = -0x34563875;
LAB_0005a304:
        if (iVar2 != iVar1) {
          iVar5 = iVar2;
        }
        goto LAB_0005a308;
      }
      if (iVar2 == 0x7065a1f0) {
        _objc_msgSend(local_a0,local_c8,local_98);
        iVar4 = 0x42eaef8a;
      }
      else {
        iVar4 = -0xfa5e563;
        if (iVar2 != 0x71f1d4c9) {
          iVar4 = iVar2;
        }
      }
    }
  } while( true );
}



void FUN_0005a5a4(long param_1,long param_2)

{
  int iVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar1 = 0x259f9715;
  while( true ) {
    while( true ) {
      while (0x259f9714 < iVar1) {
        if (iVar1 < 0x32a51c42) {
          if (iVar1 == 0x259f9715) {
            iVar1 = 0x32a51c42;
          }
          else if (iVar1 == 0x31f31d5b) {
            iVar1 = -0x7125ae61;
          }
        }
        else if (iVar1 == 0x525bcb6c) {
          local_68 = (void *)(local_78 + 0x28);
          iVar1 = 0x31f31d5b;
        }
        else if (iVar1 == 0x32a51c42) {
          __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
          iVar1 = 0x11685e42;
          local_78 = param_1;
          local_70 = (undefined8 *)(param_2 + 0x28);
        }
      }
      if (iVar1 != -0x7125ae61) break;
      __Block_object_assign(local_68,(void *)*local_70,8);
      iVar1 = -0x63762f57;
    }
    if (iVar1 == -0x63762f57) break;
    if (iVar1 == 0x11685e42) {
      iVar1 = 0x525bcb6c;
    }
  }
  return;
}



void FUN_0005a71c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  iVar1 = 0x44934147;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar2 = iVar1, iVar1 = iVar2, iVar2 < 0x2b699568) {
            if (iVar2 < -0x449714e8) {
              if (iVar2 == -0x788a2ee0) {
                iVar1 = 0x17b9196b;
              }
              else if (iVar2 == -0x63bd61c0) {
                local_28 = (undefined8 *)(local_30 + 0x20);
                iVar1 = -0x152ea7f9;
              }
            }
            else if (iVar2 == -0x449714e8) {
              iVar1 = 0x3de736c8;
              local_30 = param_1;
            }
            else if (iVar2 == -0x152ea7f9) {
              iVar1 = -0x788a2ee0;
            }
            else if (iVar2 == 0x17b9196b) {
              __Block_object_dispose(*(void **)(local_30 + 0x28),8);
              __Block_object_dispose((void *)*local_28,8);
              iVar1 = 0x4479e91b;
            }
          }
          if (iVar2 < 0x44934147) break;
          iVar1 = -0x63bd61c0;
          if (iVar2 != 0x6ad1861e) {
            if (iVar2 == 0x66cbeec5) {
              iVar1 = -0x63bd61c0;
            }
            else {
              iVar1 = iVar2;
              if (iVar2 == 0x44934147) {
                iVar1 = -0x449714e8;
              }
            }
          }
        }
        iVar1 = -0x449714e8;
      } while (iVar2 == 0x2b699568);
      if (iVar2 != 0x3de736c8) break;
      iVar1 = 0x6ad1861e;
    }
    iVar1 = iVar2;
  } while (iVar2 != 0x4479e91b);
  return;
}



undefined8 FUN_0005a8dc(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 unaff_x26;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  char local_99;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar3 = _objc_retain(param_2);
  iVar1 = -0x29a0f98;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar4 = iVar1, iVar1 = iVar4, 0xd95f78e < iVar4) {
                if (iVar4 < 0x3a03cc58) {
                  if (iVar4 < 0x1fa294fc) {
                    if (iVar4 < 0x17aa49b0) {
                      iVar1 = 0xfea262c;
                      if (iVar4 != 0xd95f78f) {
                        if (iVar4 == 0xfea262c) {
                          _objc_retain(local_70);
                          iVar1 = 0x5a23d998;
                        }
                        else {
                          iVar1 = -0x4679d393;
                          if (iVar4 != 0x11201cf5) {
                            iVar1 = iVar4;
                          }
                        }
                      }
                    }
                    else if (iVar4 == 0x17aa49b0) {
                      _objc_retain(local_70);
                      iVar1 = 0xfea262c;
                    }
                    else {
                      iVar2 = -0x736e2e6b;
                      if (iVar4 != 0x1d326dcd) {
                        iVar2 = iVar4;
                      }
                      iVar1 = -0x70c85e5c;
                      if (iVar4 != 0x19dfcc93) {
                        iVar1 = iVar2;
                      }
                    }
                  }
                  else if (iVar4 < 0x369b902f) {
                    if (iVar4 == 0x1fa294fc) {
                      iVar1 = 0x7943d724;
                    }
                    else if (iVar4 == 0x2755e555) {
                      iVar1 = 0x4238c04e;
                    }
                    else if (iVar4 == 0x35a44b2a) {
                      local_98 = *(long *)(*(long *)(param_1 + 0x20) + 8);
                      iVar1 = 0x46d14ed;
                    }
                  }
                  else if (iVar4 == 0x369b902f) {
                    local_99 = _objc_msgSend(local_b0,local_d8,local_a8);
                    iVar1 = 0x37e0aab8;
                  }
                  else if (iVar4 == 0x37e0aab8) {
                    iVar1 = -0x263740ad;
                  }
                  else if (iVar4 == 0x380cdf2e) {
                    _objc_msgSend(local_e8,local_d8,local_e0);
                    iVar1 = 0xd497deb;
                  }
                }
                else if (iVar4 < 0x54e836df) {
                  if (iVar4 < 0x484dd7fb) {
                    if (iVar4 == 0x3a03cc58) {
                      local_b0 = DAT_000a4070;
                      local_a8 = _g_tempFile;
                      iVar1 = 0x11201cf5;
                    }
                    else {
                      iVar1 = 0x1d326dcd;
                      if ((iVar4 != 0x3cbd2c3e) && (iVar1 = iVar4, iVar4 == 0x4238c04e)) {
                        local_90 = *(undefined8 *)(local_98 + 0x28);
                        local_88 = local_90;
                        iVar1 = 0x1fa294fc;
                      }
                    }
                  }
                  else {
                    iVar1 = 0x3a03cc58;
                    if (iVar4 != 0x484dd7fb) {
                      if (iVar4 == 0x4e707ab6) {
                        _objc_release(uVar3);
                        _objc_autorelease(local_68);
                        iVar1 = -0x1d2f087a;
                      }
                      else {
                        iVar1 = iVar4;
                        if (iVar4 == 0x5109a180) {
                          _objc_msgSend(local_c8,local_d8,local_c0);
                          iVar1 = -0x674eb6fc;
                        }
                      }
                    }
                  }
                }
                else if (iVar4 < 0x617cac8a) {
                  iVar1 = 0xd497deb;
                  if (iVar4 != 0x54e836df) {
                    if (iVar4 == 0x5a23d998) {
                      unaff_x26 = local_78;
                      iVar1 = -0x265390db;
                    }
                    else {
                      iVar1 = iVar4;
                      if (iVar4 == 0x5cc18497) {
                        local_80 = *(long *)(param_1 + 0x28);
                        iVar1 = 0x617cac8a;
                      }
                    }
                  }
                }
                else if (iVar4 == 0x617cac8a) {
                  local_78 = (**(code **)(*(long *)(local_80 + 8) + 0x18))
                                       (uVar3,"fileDataRepresentation");
                  local_70 = local_78;
                  iVar1 = 0xd95f78f;
                }
                else if (iVar4 == 0x68e62280) {
                  _objc_retain(local_88);
                  iVar1 = -0x7d18b673;
                }
                else {
                  iVar1 = -0x7d18b673;
                  if (iVar4 != 0x7943d724) {
                    iVar1 = iVar4;
                  }
                }
              }
              if (-0x30283c1b < iVar4) break;
              if (iVar4 < -0x60371cf4) {
                if (iVar4 < -0x70c85e5c) {
                  if (iVar4 == -0x7d18b673) {
                    _objc_retain(local_88);
                    iVar1 = -0x66c29f69;
                  }
                  else if (iVar4 == -0x736e2e6b) {
                    iVar1 = 0x35a44b2a;
                    if (local_99 == '\0') {
                      iVar1 = 0x5cc18497;
                    }
                  }
                  else if (iVar4 == -0x719c9e68) {
                    _objc_release(uVar3);
                    _objc_autorelease(local_68);
                    iVar1 = 0x4e707ab6;
                  }
                }
                else if (iVar4 == -0x70c85e5c) {
                  local_c8 = DAT_000a4070;
                  iVar1 = 0xaa74cea;
                }
                else if (iVar4 == -0x674eb6fc) {
                  local_b1 = _objc_msgSend(local_c8,local_d8,local_c0);
                  iVar1 = -0x54561d1f;
                }
                else if (iVar4 == -0x66c29f69) {
                  unaff_x26 = local_90;
                  iVar1 = -0x265390db;
                }
              }
              else if (iVar4 < -0x4221c19f) {
                if (iVar4 == -0x60371cf4) {
                  _objc_msgSend(local_b0,local_d8,local_a8);
                  iVar1 = 0x369b902f;
                }
                else if (iVar4 == -0x54561d1f) {
                  iVar1 = 0x484dd7fb;
                  if (local_b1 == '\0') {
                    iVar1 = 0x5cc18497;
                  }
                }
                else {
                  iVar1 = 0x369b902f;
                  if (iVar4 != -0x4679d393) {
                    iVar1 = iVar4;
                  }
                }
              }
              else {
                iVar1 = -0x70c85e5c;
                if ((((iVar4 != -0x4221c19f) && (iVar1 = 0x3a03cc58, iVar4 != -0x313fb4c3)) &&
                    (iVar1 = iVar4, iVar4 == -0x307f3189)) && (iVar1 = 0x35a44b2a, local_c9 == '\0')
                   ) {
                  iVar1 = 0x19dfcc93;
                }
              }
            }
            if (iVar4 < -0xff0238e) break;
            if (iVar4 < 0x8e741ab) {
              iVar1 = 0x4238c04e;
              if (iVar4 != 0x46d14ed) {
                iVar1 = iVar4;
              }
              iVar2 = -0x229881ab;
              if (iVar4 != -0x29a0f98) {
                iVar2 = iVar1;
              }
              iVar1 = -0x229881ab;
              if (iVar4 != -0xff0238e) {
                iVar1 = iVar2;
              }
            }
            else if (iVar4 == 0x8e741ab) {
              local_c0 = _g_isMirroredMarkfbs;
              iVar1 = -0x30283c1a;
            }
            else if (iVar4 == 0xaa74cea) {
              iVar1 = 0x8e741ab;
            }
            else if (iVar4 == 0xd497deb) {
              local_c9 = _objc_msgSend(local_e8,local_d8,local_e0);
              iVar1 = -0x307f3189;
            }
          }
          if (-0x229881ac < iVar4) break;
          iVar1 = -0x674eb6fc;
          if (iVar4 != -0x30283c1a) {
            if (iVar4 == -0x265390db) {
              local_68 = unaff_x26;
              iVar1 = 0x4e707ab6;
            }
            else {
              iVar1 = 0x1d326dcd;
              if (iVar4 != -0x263740ad) {
                iVar1 = iVar4;
              }
            }
          }
        }
        if (iVar4 != -0x229881ab) break;
        local_e8 = DAT_000a4070;
        local_e0 = _g_tempFile;
        local_d8 = "fileExistsAtPath:";
        iVar1 = -0x1f147c0a;
      }
      if (iVar4 != -0x1f147c0a) break;
      iVar1 = 0x54e836df;
    }
  } while (iVar4 != -0x1d2f087a);
  return local_68;
}



undefined8 FUN_0005b0e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x4ea4873d;
  do {
    while( true ) {
      while( true ) {
        while (iVar2 = iVar1, iVar1 = iVar2, iVar2 < -0x77f68d2) {
          if (iVar2 < -0x4489c649) {
            if (iVar2 == -0x7a2c271a) {
              iVar1 = -0x77f68d2;
            }
            else if (iVar2 == -0x5c6c016e) {
              _objc_release(param_2);
              iVar1 = -0x4489c649;
            }
          }
          else if (iVar2 == -0x4489c649) {
            _objc_release(param_2);
            iVar1 = 0x2160fc69;
          }
          else {
            iVar1 = -0x4489c649;
            if (iVar2 != -0xa1bd386) {
              iVar1 = iVar2;
            }
          }
        }
        if (0x2160fc68 < iVar2) break;
        if (iVar2 == -0x77f68d2) {
          iVar1 = -0xa1bd386;
        }
        else if (iVar2 == -0x46bf9bd) {
          _objc_retain(param_2);
          iVar1 = -0x7a2c271a;
        }
      }
      if (iVar2 != 0x4ea4873d) break;
      iVar1 = -0x46bf9bd;
    }
  } while (iVar2 != 0x2160fc69);
  return 0;
}



undefined8 FUN_0005b244(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_x25;
  undefined8 local_d8;
  char *local_d0;
  char local_c1;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_a9;
  undefined8 local_a8;
  char local_99;
  long local_98;
  undefined8 local_90;
  long *local_88;
  code *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar2 = 0x388b7356;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar3 = iVar2, iVar2 = iVar3, 0xfc447f9 < iVar3) {
                if (iVar3 < 0x50ff81fa) {
                  if (iVar3 < 0x27ac5f44) {
                    if (iVar3 < 0x1270ed35) {
                      iVar1 = 0x1270ed35;
                      if (iVar3 != 0x1204814a) {
                        iVar1 = iVar3;
                      }
                      iVar2 = -0x42554ae7;
                      if (iVar3 != 0xfc447fa) {
                        iVar2 = iVar1;
                      }
                    }
                    else if (iVar3 == 0x1270ed35) {
                      iVar2 = -0xa122447;
                      if (local_a9 == '\0') {
                        iVar2 = 0x50ff81fa;
                      }
                    }
                    else if (iVar3 == 0x1d7afc38) {
                      iVar2 = 0x57699c9a;
                    }
                    else if (iVar3 == 0x2355fd41) {
                      unaff_x25 = local_90;
                      iVar2 = -0x189419fd;
                    }
                  }
                  else if (iVar3 < 0x3a7fcadf) {
                    if (iVar3 == 0x27ac5f44) {
                      _objc_msgSend(local_a8,local_d0,_g_tempFile);
                      iVar2 = -0x7fc57b8c;
                    }
                    else if (iVar3 == 0x2db9bf4b) {
                      _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
                      iVar2 = -0x42554ae7;
                    }
                    else {
                      iVar2 = -0x50ffadad;
                      if (iVar3 != 0x388b7356) {
                        iVar2 = iVar3;
                      }
                    }
                  }
                  else if (iVar3 == 0x3a7fcadf) {
                    _objc_release(param_2);
                    iVar2 = 0x61564384;
                  }
                  else if (iVar3 == 0x45ff24b9) {
                    local_88 = (long *)(param_1 + 0x28);
                    iVar2 = 0x5ea93f67;
                  }
                  else if (iVar3 == 0x4beb0f70) {
                    _objc_retain(param_2);
                    iVar2 = -0x50ffadad;
                  }
                }
                else if (iVar3 < 0x5ea93f67) {
                  if (iVar3 < 0x57699c9a) {
                    iVar2 = 0x45ff24b9;
                    if ((iVar3 != 0x50ff81fa) && (iVar2 = iVar3, iVar3 == 0x56c16490)) {
                      local_a8 = DAT_000a4070;
                      iVar2 = -0x72804a;
                    }
                  }
                  else if (iVar3 == 0x57699c9a) {
                    iVar2 = 0xbb53020;
                    if (local_99 == '\0') {
                      iVar2 = 0x50ff81fa;
                    }
                  }
                  else {
                    iVar2 = -0x4d0ad52a;
                    if ((iVar3 != 0x57d3e66d) && (iVar2 = iVar3, iVar3 == 0x5b48d1c4)) {
                      local_a9 = _objc_msgSend(local_c0,local_d0,local_b8);
                      iVar2 = 0x7de4329b;
                    }
                  }
                }
                else if (iVar3 < 0x71f1efed) {
                  if (iVar3 == 0x5ea93f67) {
                    iVar2 = -0x53ed392;
                  }
                  else if (iVar3 == 0x61564384) {
                    _objc_release(param_2);
                    iVar2 = 0xb710966;
                  }
                  else {
                    iVar2 = 0x71f1efed;
                    if (iVar3 != 0x70e8228e) {
                      iVar2 = iVar3;
                    }
                  }
                }
                else if (iVar3 == 0x71f1efed) {
                  local_90 = *(undefined8 *)(*(long *)(local_98 + 8) + 0x18);
                  iVar2 = -0x4866463f;
                }
                else {
                  iVar1 = -0x7aa31dca;
                  if (iVar3 != 0x7f6c5aca) {
                    iVar1 = iVar3;
                  }
                  iVar2 = 0x1204814a;
                  if (iVar3 != 0x7de4329b) {
                    iVar2 = iVar1;
                  }
                }
              }
              if (-0x2edf59f6 < iVar3) break;
              if (iVar3 < -0x50ffadad) {
                if (iVar3 < -0x7aa31dca) {
                  if (iVar3 == -0x7fc57b8c) {
                    local_99 = _objc_msgSend(local_a8,local_d0,_g_tempFile);
                    iVar2 = 0x1d7afc38;
                  }
                  else if ((iVar3 == -0x7ea550fa) && (iVar2 = 0xbb53020, local_c1 == '\0')) {
                    iVar2 = -0x1cab6c45;
                  }
                }
                else if (iVar3 == -0x7aa31dca) {
                  local_70 = (*local_80)(param_2,local_78);
                  iVar2 = -0x414655b0;
                }
                else {
                  iVar1 = 0xfc447fa;
                  if (iVar3 != -0x609a612c) {
                    iVar1 = iVar3;
                  }
                  iVar2 = -0x7fc57b8c;
                  if (iVar3 != -0x6c6dceb7) {
                    iVar2 = iVar1;
                  }
                }
              }
              else if (iVar3 < -0x42554ae7) {
                if (iVar3 == -0x50ffadad) {
                  _objc_retain(param_2);
                  local_d8 = DAT_000a4070;
                  iVar2 = -0x609a612c;
                }
                else if (iVar3 == -0x4d0ad52a) {
                  local_c0 = DAT_000a4070;
                  local_b8 = _g_isMirroredMarkfbs;
                  iVar2 = -0xecf95a6;
                }
                else {
                  iVar2 = 0x2355fd41;
                  if (iVar3 != -0x4866463f) {
                    iVar2 = iVar3;
                  }
                }
              }
              else if (iVar3 == -0x42554ae7) {
                local_d0 = "fileExistsAtPath:";
                local_c1 = _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
                iVar2 = -0x7ea550fa;
              }
              else if (iVar3 == -0x414655b0) {
                unaff_x25 = local_70;
                iVar2 = -0x189419fd;
              }
              else {
                iVar2 = -0x7aa31dca;
                if (iVar3 != -0x412780bb) {
                  iVar2 = iVar3;
                }
              }
            }
            if (-0xa122448 < iVar3) break;
            if (iVar3 < -0x150cfa1d) {
              iVar2 = 0x1204814a;
              if (((iVar3 != -0x2edf59f5) && (iVar2 = -0x4d0ad52a, iVar3 != -0x1cab6c45)) &&
                 (iVar2 = iVar3, iVar3 == -0x189419fd)) {
                local_68 = unaff_x25;
                iVar2 = 0x61564384;
              }
            }
            else if (iVar3 == -0x150cfa1d) {
              iVar2 = 0x45ff24b9;
            }
            else if (iVar3 == -0xee7405b) {
              iVar2 = 0x71f1efed;
            }
            else {
              iVar2 = 0x5b48d1c4;
              if (iVar3 != -0xecf95a6) {
                iVar2 = iVar3;
              }
            }
          }
          if (0x25fcbe4 < iVar3) break;
          iVar2 = 0x56c16490;
          if (iVar3 != -0xa122447) {
            if (iVar3 == -0x53ed392) {
              local_80 = *(code **)(*(long *)(*local_88 + 8) + 0x18);
              local_78 = "pixelBuffer";
              iVar2 = 0x7f6c5aca;
            }
            else {
              iVar2 = -0x6c6dceb7;
              if (iVar3 != -0x72804a) {
                iVar2 = iVar3;
              }
            }
          }
        }
        iVar2 = 0x56c16490;
      } while (iVar3 == 0x25fcbe5);
      if (iVar3 != 0xbb53020) break;
      local_98 = *(long *)(param_1 + 0x20);
      iVar2 = 0x70e8228e;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0xb710966);
  return local_68;
}



undefined8 FUN_0005b9b8(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_x26;
  long local_e0;
  undefined8 local_d8;
  char *local_d0;
  char local_c1;
  undefined8 local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar2 = 0x57b36e33;
LAB_0005ba28:
  do {
    while (iVar3 = iVar2, iVar2 = -0x7d2a6c07, iVar3 < 0x5a3922) {
      if (iVar3 < -0x470f7af3) {
        if (iVar3 < -0x5f0ef953) {
          if (iVar3 < -0x6fe529af) {
            if (iVar3 == -0x7d2a6c07) {
              iVar2 = 0x34ab774d;
            }
            else if (iVar3 == -0x7936040f) {
              local_d0 = "fileExistsAtPath:";
              local_c1 = _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
              iVar2 = 0x2d8b5150;
            }
            else {
              iVar2 = iVar3;
              if (iVar3 == -0x70789739) {
                local_c0 = DAT_000a4070;
                iVar2 = -0x4a4076b2;
              }
            }
          }
          else if (iVar3 < -0x634bd2d2) {
            iVar2 = 0x2ffafda8;
            if ((iVar3 != -0x6fe529af) && (iVar2 = iVar3, iVar3 == -0x6aa4ce02)) {
              _objc_release(param_2);
              iVar2 = 0x484c6a06;
            }
          }
          else if (iVar3 == -0x634bd2d2) {
            iVar2 = -0x22a47c5e;
          }
          else if (iVar3 != -0x5f7a5cec) {
            iVar2 = iVar3;
          }
        }
        else {
          if (-0x54f5da3e < iVar3) {
            iVar4 = -0x4a4076b3;
            iVar6 = 0x6c84581;
            if (iVar3 != -0x488d26ef) {
              iVar6 = iVar3;
            }
            iVar2 = -0x5f0ef953;
            if (iVar3 != -0x4a4076b2) {
              iVar2 = iVar6;
            }
            iVar5 = -0x54f5da3d;
            iVar6 = -0x5f7a5cec;
            iVar7 = 0x6d59642a;
            if (iVar3 != -0x4bc6c092) {
              iVar7 = iVar3;
            }
            goto LAB_0005be20;
          }
          if (iVar3 < -0x5a47acd9) {
            iVar6 = -0x336bf63e;
            if (iVar3 != -0x5a53a1bb) {
              iVar6 = iVar3;
            }
            iVar2 = 0x17be7b77;
            if (iVar3 != -0x5f0ef953) {
              iVar2 = iVar6;
            }
          }
          else if (iVar3 == -0x5a47acd9) {
            iVar2 = 0x6d59642a;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == -0x566b007e) {
              local_80 = (long *)(local_e0 + 0x28);
              iVar2 = -0x19fd1642;
            }
          }
        }
      }
      else if (iVar3 < -0x22a47c5e) {
        if (iVar3 < -0x370d3e56) {
          if (iVar3 < -0x4224293f) {
            iVar2 = -0x566b007e;
            if ((iVar3 != -0x470f7af3) && (iVar2 = iVar3, iVar3 == -0x44d51be9)) {
              return local_68;
            }
          }
          else {
            iVar2 = 0x25c04d0d;
            if ((iVar3 != -0x4224293f) && (iVar2 = iVar3, iVar3 == -0x41f9d8fb)) {
              _objc_msgSend(local_c0,local_d0,_g_isMirroredMarkfbs);
              iVar2 = 0x17be7b77;
            }
          }
        }
        else if (iVar3 < -0x2dc3080a) {
          iVar6 = 0x65f8144e;
          if (iVar3 != -0x336bf63e) {
            iVar6 = iVar3;
          }
          iVar2 = -0x7936040f;
          if (iVar3 != -0x370d3e56) {
            iVar2 = iVar6;
          }
        }
        else {
          iVar2 = -0x70789739;
          if ((iVar3 != -0x2dc3080a) && (iVar2 = iVar3, iVar3 == -0x2c7b926e)) {
            unaff_x26 = local_88;
            iVar2 = 0x6847d158;
          }
        }
      }
      else if (iVar3 < -0x18a9ab00) {
        if (iVar3 < -0x1c540fdc) {
          if (iVar3 == -0x22a47c5e) {
            local_a0 = local_b0;
            iVar2 = -0x81a3057;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == -0x1c932a71) {
              iVar2 = 0x25c04d0d;
            }
          }
        }
        else if (iVar3 == -0x1c540fdc) {
          iVar2 = -0x566b007e;
        }
        else {
          iVar2 = -0x4224293f;
          if (iVar3 != -0x19fd1642) {
            iVar2 = iVar3;
          }
        }
      }
      else if (iVar3 < -0x81a3057) {
        if (iVar3 == -0x18a9ab00) {
          unaff_x26 = local_70;
          iVar2 = 0x6847d158;
        }
        else {
          iVar2 = iVar3;
          if (iVar3 == -0x157ecf69) {
            _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
            iVar2 = -0x7936040f;
          }
        }
      }
      else {
        iVar4 = -0x81a3057;
        iVar2 = 0x18d107c7;
        iVar5 = -0x29faf67;
        iVar6 = -0x22a47c5e;
LAB_0005c184:
        if (iVar3 != iVar5) {
          iVar6 = iVar3;
        }
        if (iVar3 != iVar4) {
          iVar2 = iVar6;
        }
      }
    }
    if (0x5138c2a2 < iVar3) {
      if (iVar3 < 0x66ec5cd6) {
        if (iVar3 < 0x58060ee7) {
          if (iVar3 == 0x5138c2a3) {
            _objc_retain(param_2);
            iVar2 = 0x5717bf19;
          }
          else if (iVar3 == 0x5717bf19) {
            _objc_retain(param_2);
            local_d8 = DAT_000a4070;
            local_e0 = param_1;
            iVar2 = 0x6703fd76;
          }
          else {
            iVar2 = 0x5717bf19;
            if (iVar3 != 0x57b36e33) {
              iVar2 = iVar3;
            }
          }
          goto LAB_0005ba28;
        }
        if (0x5d2d1e1f < iVar3) {
          if (iVar3 == 0x5d2d1e20) {
            iVar2 = 0x6c84581;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == 0x65f8144e) {
              local_70 = (**(code **)(*local_78 + 0x18))(param_2,"CGImageRepresentation");
              iVar2 = -0x18a9ab00;
            }
          }
          goto LAB_0005ba28;
        }
        if (iVar3 == 0x58060ee7) {
          local_b0 = DAT_000a4070;
          local_a8 = _g_tempFile;
          iVar2 = 0x66ec5cd6;
          goto LAB_0005ba28;
        }
        iVar6 = 0x5900faff;
      }
      else {
        if (iVar3 < 0x6d4d054c) {
          if (iVar3 < 0x6847d158) {
            iVar4 = 0x66ec5cd6;
            iVar2 = -0x29faf67;
            iVar5 = 0x6703fd76;
            iVar6 = -0x370d3e56;
            goto LAB_0005c184;
          }
          if (iVar3 == 0x6847d158) {
            local_68 = unaff_x26;
            iVar2 = 0x484c6a06;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == 0x6b4c7c53) {
              local_88 = *local_90;
              iVar2 = -0x2c7b926e;
            }
          }
          goto LAB_0005ba28;
        }
        if (iVar3 < 0x7360d30b) {
          iVar2 = -0x70789739;
          if ((iVar3 != 0x6d4d054c) && (iVar2 = iVar3, iVar3 == 0x6d59642a)) {
            local_90 = (undefined8 *)(*(long *)(local_98 + 8) + 0x18);
            iVar2 = 0x2b1c45c4;
          }
          goto LAB_0005ba28;
        }
        if (iVar3 == 0x7360d30b) {
          iVar2 = 0x6b4c7c53;
          goto LAB_0005ba28;
        }
        iVar6 = 0x7f93ee8e;
      }
      iVar2 = 0x58060ee7;
      if (iVar3 != iVar6) {
        iVar2 = iVar3;
      }
      goto LAB_0005ba28;
    }
    if (iVar3 < 0x2b1c45c4) {
      if (iVar3 < 0xa0f4c71) {
        iVar2 = 0x6b4c7c53;
        if (iVar3 != 0x5a3922) {
          if (iVar3 == 0x6c84581) {
            local_98 = *(long *)(local_e0 + 0x20);
            iVar2 = 0x3e514734;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == 0x9c7d2c9) {
              (**(code **)(*local_78 + 0x18))(param_2,"CGImageRepresentation");
              iVar2 = 0x65f8144e;
            }
          }
        }
        goto LAB_0005ba28;
      }
      if (iVar3 < 0x18d107c7) {
        if (iVar3 != 0xa0f4c71) {
          iVar2 = iVar3;
          if (iVar3 == 0x17be7b77) {
            local_b1 = _objc_msgSend(local_c0,local_d0,_g_isMirroredMarkfbs);
            iVar2 = -0x54f5da3d;
          }
          goto LAB_0005ba28;
        }
        bVar1 = local_c1 == '\0';
        iVar3 = 0x6d4d054c;
      }
      else {
        if (iVar3 != 0x18d107c7) {
          iVar2 = iVar3;
          if (iVar3 == 0x25c04d0d) {
            local_78 = (long *)(*local_80 + 8);
            iVar2 = -0x5a53a1bb;
          }
          goto LAB_0005ba28;
        }
        iVar2 = _objc_msgSend(local_a0,local_d0,local_a8);
        bVar1 = iVar2 == 0;
        iVar3 = -0x470f7af3;
      }
      iVar2 = -0x488d26ef;
      if (bVar1) {
        iVar2 = iVar3;
      }
      goto LAB_0005ba28;
    }
    if (iVar3 < 0x34ab774d) {
      iVar4 = 0x2e4ee12b;
      iVar6 = 0xa0f4c71;
      if (iVar3 != 0x2ffafda8) {
        iVar6 = iVar3;
      }
      if (iVar3 != 0x2e4ee12c) {
        iVar2 = iVar6;
      }
      iVar5 = 0x2b1c45c4;
      iVar6 = 0x5a3922;
      iVar7 = -0x6fe529af;
      if (iVar3 != 0x2d8b5150) {
        iVar7 = iVar3;
      }
LAB_0005be20:
      if (iVar3 != iVar5) {
        iVar6 = iVar7;
      }
      if (iVar3 <= iVar4) {
        iVar2 = iVar6;
      }
    }
    else if (iVar3 < 0x3e514734) {
      if (iVar3 == 0x34ab774d) {
        iVar2 = 0x5900faff;
        if (local_b1 == '\0') {
          iVar2 = -0x470f7af3;
        }
      }
      else {
        iVar2 = 0x2ffafda8;
        if (iVar3 != 0x3b7b1a2b) {
          iVar2 = iVar3;
        }
      }
    }
    else if (iVar3 == 0x3e514734) {
      iVar2 = -0x4bc6c092;
    }
    else {
      iVar2 = iVar3;
      if (iVar3 == 0x484c6a06) {
        _objc_release(param_2);
        iVar2 = -0x44d51be9;
      }
    }
  } while( true );
}



undefined8 FUN_0005c3dc(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_x26;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  char local_91;
  long local_90;
  long *local_88;
  long *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  iVar2 = 0x7ceaa107;
LAB_0005c44c:
  while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < 0x28ff3ab) {
    if (iVar3 < -0x4c41ae2f) {
      if (iVar3 < -0x65159aba) {
        if (iVar3 < -0x6b8f52bc) {
          if (iVar3 == -0x7cde36c0) {
            _objc_retain(param_2);
            local_e0 = DAT_000a4070;
            local_e8 = param_1;
            iVar2 = 0x70c67afd;
          }
          else if (iVar3 == -0x77a269e5) {
            iVar2 = 0x22dd22e2;
          }
          else if (iVar3 == -0x77786cee) {
            iVar2 = 0x4ac98d28;
          }
        }
        else if (iVar3 == -0x6b8f52bc) {
          iVar2 = -0xb19042;
        }
        else if (iVar3 == -0x6b0509d5) {
          local_a8 = DAT_000a4070;
          local_a0 = _g_tempFile;
          iVar2 = 0x76c8b44e;
        }
        else if (iVar3 == -0x6a38b266) {
          local_80 = (long *)(local_e8 + 0x28);
          iVar2 = -0x505007a8;
        }
      }
      else if (iVar3 < -0x505007a8) {
        iVar2 = -0xb19042;
        if (((iVar3 != -0x65159aba) && (iVar2 = 0x2efe2d34, iVar3 != -0x6176a225)) &&
           (iVar2 = iVar3, iVar3 == -0x51f33887)) {
          bVar1 = local_91 == '\0';
          iVar3 = -0xcd72fce;
LAB_0005cc20:
          iVar2 = -0x65159aba;
          if (bVar1) {
            iVar2 = iVar3;
          }
        }
      }
      else {
        iVar4 = -0x4c41ae2f;
        if (iVar3 != -0x4c61aaab) {
          iVar4 = iVar3;
        }
        iVar2 = 0x708ff0b8;
        if (iVar3 != -0x4e881453) {
          iVar2 = iVar4;
        }
        iVar4 = 0x28ff3ab;
        if (iVar3 != -0x4ea3cc69) {
          iVar4 = iVar3;
        }
        iVar5 = 0x6f7bd363;
        if (iVar3 != -0x505007a8) {
          iVar5 = iVar4;
        }
        if (iVar3 < -0x4e881453) {
          iVar2 = iVar5;
        }
      }
    }
    else if (iVar3 < -0x26eb3f45) {
      if (iVar3 < -0x3f07aa72) {
        if (iVar3 == -0x4c41ae2f) {
          local_91 = _objc_msgSend(local_a8,local_d0,local_a0);
          iVar2 = 0x68210822;
        }
        else {
          iVar2 = 0x52db6d1e;
          if ((iVar3 != -0x4c1d2e73) && (iVar2 = iVar3, iVar3 == -0x40dd7996)) {
            (**(code **)(*(long *)(local_78 + 8) + 0x18))(param_2,"previewCGImageRepresentation");
            iVar2 = 0x708ff0b8;
          }
        }
      }
      else {
        iVar2 = 0x2efe2d34;
        if (((iVar3 != -0x3f07aa72) && (iVar2 = -0x6b0509d5, iVar3 != -0x38cac919)) &&
           (iVar2 = iVar3, iVar3 == -0x2c462d07)) {
          local_68 = unaff_x26;
          iVar2 = 0x5d361a95;
        }
      }
    }
    else if (iVar3 < -0xcd72fce) {
      if (iVar3 == -0x26eb3f45) {
        iVar2 = 0x3e0c16be;
        if (local_a9 == '\0') {
          iVar2 = -0xcd72fce;
        }
      }
      else if (iVar3 == -0x11824518) {
        _objc_release(param_2);
        iVar2 = 0x5d361a95;
      }
      else if (iVar3 == -0xe698327) {
        unaff_x26 = local_70;
        iVar2 = -0x2c462d07;
      }
    }
    else if (iVar3 < -0x2a68878) {
      iVar2 = -0x6a38b266;
      if ((iVar3 != -0xcd72fce) && (iVar2 = iVar3, iVar3 == -0x66fbfac)) {
        _objc_msgSend(local_b8,local_d0,local_c0);
        iVar2 = 0x38fd73f4;
      }
    }
    else {
      iVar2 = 0x28ff3ab;
      if ((iVar3 != -0x2a68878) && (iVar2 = iVar3, iVar3 == -0xb19042)) {
        local_90 = *(long *)(local_e8 + 0x20);
        iVar2 = -0x77a269e5;
      }
    }
  }
  if (iVar3 < 0x50da8d17) {
    if (iVar3 < 0x385df0ec) {
      if (iVar3 < 0x2685058b) {
        if (iVar3 == 0x28ff3ab) {
          local_c8 = DAT_000a4070;
          local_c0 = _g_isMirroredMarkfbs;
          iVar2 = 0x385df0ec;
        }
        else if (iVar3 == 0x22dd22e2) {
          local_88 = (long *)(local_90 + 8);
          iVar2 = 0x24bf9365;
        }
        else if (iVar3 == 0x24bf9365) {
          unaff_x26 = *(undefined8 *)(*local_88 + 0x18);
          iVar2 = -0x2c462d07;
        }
      }
      else {
        if (iVar3 == 0x2685058b) {
          iVar2 = _objc_msgSend(local_e0,local_d0,local_d8);
          bVar1 = iVar2 == 0;
          iVar3 = -0x2a68878;
          goto LAB_0005cc20;
        }
        if (iVar3 == 0x2efe2d34) {
          iVar2 = -0x51f33887;
        }
        else if (iVar3 == 0x37a18322) {
          _objc_retain(param_2);
          iVar2 = -0x7cde36c0;
        }
      }
    }
    else if (iVar3 < 0x43cb0079) {
      if (iVar3 == 0x385df0ec) {
        iVar2 = 0x50da8d17;
      }
      else if (iVar3 == 0x38fd73f4) {
        local_a9 = _objc_msgSend(local_b8,local_d0,local_c0);
        iVar2 = -0x26eb3f45;
      }
      else {
        iVar2 = -0x6b0509d5;
        if (iVar3 != 0x3e0c16be) {
          iVar2 = iVar3;
        }
      }
    }
    else {
      if (iVar3 < 0x47b85f87) {
        iVar4 = 0x43cb0079;
        iVar2 = -0x4e881453;
        iVar5 = 0x38fd73f4;
        if (iVar3 != 0x45c5b8c3) {
          iVar5 = iVar3;
        }
        goto LAB_0005c9f4;
      }
      if (iVar3 == 0x4ac98d28) {
        local_78 = *local_80;
        iVar2 = 0x43cb0079;
      }
      else if (iVar3 == 0x47b85f87) {
        return local_68;
      }
    }
    goto LAB_0005c44c;
  }
  if (iVar3 < 0x708ff0b8) {
    if (iVar3 < 0x61073e0e) {
      if (iVar3 == 0x50da8d17) {
        local_b8 = local_c8;
        iVar2 = 0x45c5b8c3;
      }
      else if (iVar3 == 0x52db6d1e) {
        local_d8 = _g_tempFile;
        local_d0 = "fileExistsAtPath:";
        iVar2 = 0x7c4641db;
      }
      else if (iVar3 == 0x5d361a95) {
        _objc_release(param_2);
        iVar2 = 0x47b85f87;
      }
      goto LAB_0005c44c;
    }
    if (iVar3 == 0x61073e0e) {
      _objc_msgSend(local_a8,local_d0,local_a0);
      iVar2 = -0x4c41ae2f;
      goto LAB_0005c44c;
    }
    iVar4 = 0x68210822;
    iVar2 = -0x6176a225;
    iVar5 = 0x4ac98d28;
    if (iVar3 != 0x6f7bd363) {
      iVar5 = iVar3;
    }
  }
  else if (iVar3 < 0x76c8b44e) {
    if (iVar3 == 0x708ff0b8) {
      local_70 = (**(code **)(*(long *)(local_78 + 8) + 0x18))
                           (param_2,"previewCGImageRepresentation");
      iVar2 = -0xe698327;
      goto LAB_0005c44c;
    }
    iVar4 = 0x70c67afd;
    iVar2 = -0x4c1d2e73;
    iVar5 = 0x52db6d1e;
    if (iVar3 != 0x76b8e7c5) {
      iVar5 = iVar3;
    }
  }
  else {
    if (iVar3 < 0x7c4641db) {
      if (iVar3 == 0x76c8b44e) {
        iVar2 = -0x4c61aaab;
      }
      else if (iVar3 == 0x772ce9bc) {
        iVar2 = -0x6a38b266;
      }
      goto LAB_0005c44c;
    }
    iVar4 = 0x7c4641db;
    iVar2 = 0x2685058b;
    iVar5 = iVar3;
    if (iVar3 == 0x7ceaa107) {
      iVar5 = -0x7cde36c0;
    }
  }
LAB_0005c9f4:
  if (iVar3 != iVar4) {
    iVar2 = iVar5;
  }
  goto LAB_0005c44c;
}



void FUN_0005cc74(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -0x466939b7;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < -0x1920214a) {
          if (iVar3 < -0x58cbcbc6) {
            iVar1 = 0x713d2ae2;
            if (iVar3 != -0x59a6b619) {
              iVar1 = iVar3;
            }
            iVar2 = 0x713d2ae2;
            if (iVar3 != -0x5c394316) {
              iVar2 = iVar1;
            }
            iVar1 = -0x59a6b619;
            if (iVar3 != -0x75a41a2d) {
              iVar1 = iVar2;
            }
          }
          else if (iVar3 == -0x58cbcbc6) {
            __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
            iVar1 = -0x75a41a2d;
          }
          else {
            iVar2 = 0x63ba7874;
            if (iVar3 != -0x26dd9c6f) {
              iVar2 = iVar3;
            }
            iVar1 = 0x680f27fd;
            if (iVar3 != -0x466939b7) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar3 < 0x63ba7874) break;
        iVar1 = -0x1920214a;
        if (iVar3 != 0x713d2ae2) {
          iVar1 = iVar3;
        }
        iVar2 = -0x26dd9c6f;
        if (iVar3 != 0x680f27fd) {
          iVar2 = iVar1;
        }
        iVar1 = -0x58cbcbc6;
        if (iVar3 != 0x63ba7874) {
          iVar1 = iVar2;
        }
      }
      if (iVar3 != -0x117ec054) break;
      __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
      iVar1 = -0x58cbcbc6;
    }
    iVar1 = 0x680f27fd;
  } while ((iVar3 == 0x4003ab7c) || (iVar1 = iVar3, iVar3 != -0x1920214a));
  return;
}



void FUN_0005ce24(long param_1)

{
  int iVar1;
  undefined8 local_68;
  
  iVar1 = 0x15f8366a;
  while( true ) {
    while (-0x69902152 < iVar1) {
      if (iVar1 < -0x2f5ec9d) {
        if (iVar1 == -0x69902151) {
          iVar1 = -0x75aa6e3e;
        }
        else if (iVar1 == -0x5efda500) {
          __Block_object_dispose(*(void **)(local_68 + 0x20),8);
          iVar1 = -0x69902151;
        }
      }
      else if (iVar1 == -0x2f5ec9d) {
        iVar1 = -0x74f1849a;
      }
      else if (iVar1 == 0x15f8366a) {
        iVar1 = -0x71be35d3;
      }
    }
    if (iVar1 == -0x75aa6e3e) break;
    if (iVar1 == -0x74f1849a) {
      iVar1 = -0x5efda500;
    }
    else if (iVar1 == -0x71be35d3) {
      iVar1 = -0x2f5ec9d;
      local_68 = param_1;
    }
  }
  return;
}



void FUN_0005cf64(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  int iVar1;
  byte bVar2;
  cfstringStruct *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  cfstringStruct *unaff_x23;
  cfstringStruct *unaff_x28;
  double dVar10;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  char *local_108;
  char local_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  char local_e2;
  byte local_e1;
  long local_e0;
  byte local_d1;
  char *local_d0;
  byte local_c1;
  long local_c0;
  char *local_b8;
  char local_a9;
  double local_a8;
  char local_99;
  undefined8 local_98;
  undefined8 *local_90;
  code *local_88;
  char *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  
  iVar5 = -0x7a33d776;
LAB_0005d010:
  while (iVar7 = iVar5, iVar5 = iVar7, iVar7 < 0x7e9d805) {
    if (iVar7 < -0x3e8f2870) {
      if (iVar7 < -0x572c335d) {
        if (iVar7 < -0x662aba72) {
          if (iVar7 < -0x73ff420c) {
            if (iVar7 == -0x7ca48d4b) {
              local_90 = (undefined8 *)(*(long *)(*(long *)(local_130 + 0x20) + 8) + 0x18);
              iVar5 = 0x3d7242d8;
            }
            else {
              iVar9 = -0x1ceba7a1;
              if (iVar7 != -0x79d7a6c5) {
                iVar9 = iVar7;
              }
              iVar5 = -0x1ede1c49;
              if (iVar7 != -0x7a33d776) {
                iVar5 = iVar9;
              }
            }
          }
          else if (iVar7 == -0x73ff420c) {
            iVar5 = -0x3f98345a;
          }
          else if (iVar7 == -0x72b04016) {
            iVar5 = 0x71e6e489;
          }
          else if (iVar7 == -0x6a003b5f) {
            local_88 = (code *)*local_90;
            local_80 = "captureOutput:didOutputSampleBuffer:fromConnection:";
            iVar5 = -0x41f45e22;
          }
        }
        else if (iVar7 < -0x5b90cc22) {
          if (iVar7 == -0x662aba72) {
            iVar5 = 0x19d0bd7b;
          }
          else if (iVar7 == -0x5d5a3a7e) {
            iVar5 = -0x465fc0c9;
          }
          else if (iVar7 == -0x5bac321e) {
            local_d1 = local_e1 & local_e0 != 0;
            iVar5 = -0x22d6c513;
          }
        }
        else {
          iVar5 = 0x16aae114;
          if (((iVar7 != -0x5b90cc22) && (iVar5 = -0x662aba72, iVar7 != -0x59b34bca)) &&
             (iVar5 = iVar7, iVar7 == -0x599f67c6)) {
            local_108 = "fileExistsAtPath:";
            local_f9 = _objc_msgSend(local_110,"fileExistsAtPath:",_g_isenabledw2ProChinese);
            iVar5 = 0x4435e692;
          }
        }
      }
      else if (iVar7 < -0x45298bd2) {
        if (iVar7 < -0x4c69fd6d) {
          iVar5 = 0x24936d4a;
          if (((iVar7 != -0x572c335d) && (iVar5 = -0x1aebd949, iVar7 != -0x54defc83)) &&
             (iVar5 = iVar7, iVar7 == -0x4d55d4ab)) {
            iVar5 = -0x308041c7;
          }
        }
        else if (iVar7 == -0x4c69fd6d) {
          iVar5 = -0x43e9af8;
        }
        else {
          iVar9 = 0x2f5d3932;
          pcVar3 = &cf_Realisticvisuals;
          if (iVar7 != -0x465fc0c9) {
            iVar9 = iVar7;
            pcVar3 = unaff_x23;
          }
          if (iVar7 != -0x49d1615c) {
            unaff_x23 = pcVar3;
          }
          iVar5 = 0x1fa11d66;
          if (iVar7 != -0x49d1615c) {
            iVar5 = iVar9;
          }
        }
      }
      else if (iVar7 < -0x41f45e22) {
        if (iVar7 == -0x45298bd2) {
          DAT_000a41a0 = local_a8;
          _CMSampleBufferGetFormatDescription(param_4);
          iVar5 = 0x7e9d805;
        }
        else if (iVar7 == -0x4493d08e) {
          iVar5 = 0x314f3785;
          bVar2 = local_c1;
LAB_0005def4:
          unaff_x28 = local_78;
          if (bVar2 == 0) {
            iVar5 = 0x5b882cd9;
          }
        }
        else {
          iVar9 = -0x4480bdc3;
LAB_0005d654:
          if (iVar7 == iVar9) {
            iVar5 = 0x1be13a27;
          }
        }
      }
      else if (iVar7 == -0x41f45e22) {
        iVar5 = -0xee32495;
      }
      else {
        iVar5 = 0x7e9d805;
        if ((iVar7 != -0x41c4236b) && (iVar5 = iVar7, iVar7 == -0x3f98345a)) {
          iVar5 = -0x662aba72;
        }
      }
    }
    else if (iVar7 < -0x1eab3c15) {
      if (iVar7 < -0x2ed7a935) {
        if (iVar7 < -0x3a764a0e) {
          iVar5 = 0x3f0831fa;
          if (iVar7 != -0x3af00652) {
            iVar5 = iVar7;
          }
          iVar9 = -0x5d5a3a7e;
          if (iVar7 != -0x3d067c06) {
            iVar9 = iVar5;
          }
          iVar5 = -0x308041c7;
          if (iVar7 != -0x3e8f2870) {
            iVar5 = iVar9;
          }
        }
        else if (iVar7 == -0x3a764a0e) {
          iVar5 = 0x3d4444b2;
        }
        else if (iVar7 == -0x31e01c2f) {
          _CMVideoFormatDescriptionGetDimensions(local_98);
          iVar5 = 0x6c2590c6;
        }
        else if (iVar7 == -0x308041c7) {
          local_e1 = local_118 != 0;
          local_e0 = DAT_000a4078;
          iVar5 = 0x7561cf1d;
        }
      }
      else if (iVar7 < -0x22d6c513) {
        if (iVar7 == -0x2ed7a935) {
          _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
          uVar6 = _objc_retainAutoreleasedReturnValue();
          dVar10 = (double)_objc_msgSend(uVar6,"timeIntervalSince1970");
          DAT_000a40c8 = dVar10 * 1000.0;
          _objc_release(uVar6);
          local_118 = _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",param_4,0);
          local_110 = DAT_000a4070;
          iVar5 = -0x21fdaf29;
        }
        else if (iVar7 == -0x26e79fd5) {
          _objc_release(local_78);
          _objc_msgSend(DAT_000a4070,local_108,_g_isenabledw2ProChinese);
          iVar5 = 0x3f0831fa;
        }
        else if (iVar7 == -0x23c9fab5) {
          iVar5 = 0x16ecd06b;
        }
      }
      else if (iVar7 == -0x22d6c513) {
        iVar5 = 0x2686cc02;
      }
      else {
        iVar5 = -0x599f67c6;
        if ((iVar7 != -0x21fdaf29) && (iVar5 = iVar7, iVar7 == -0x1ede1c49)) {
          _objc_retain(param_2);
          _objc_retain(param_3);
          _objc_retain(param_5);
          local_130 = param_1;
          local_128 = param_3;
          local_120 = param_5;
          iVar5 = 0x3001eb16;
        }
      }
    }
    else if (iVar7 < -0xc85fbaa) {
      if (iVar7 < -0x1487426d) {
        iVar5 = -0x72b04016;
        if (iVar7 != -0x1eab3c15) {
          if (iVar7 == -0x1ceba7a1) {
            local_c1 = _objc_msgSend(local_e0,local_d0);
            iVar5 = -0x4493d08e;
          }
          else {
            iVar5 = iVar7;
            if (iVar7 == -0x1aebd949) {
              local_c0 = DAT_000a4078;
              local_b8 = "flush";
              iVar5 = 0x6f2dd3ba;
            }
          }
        }
      }
      else {
        iVar5 = 0x24936d4a;
        if (iVar7 != -0x1487426d) {
          if (iVar7 == -0x13274fc3) {
            unaff_x28 = &cf_W2Probuffer;
            iVar5 = 0x5b882cd9;
          }
          else {
            iVar5 = iVar7;
            if (iVar7 == -0xee32495) {
              if (local_e1 == 0) {
                local_118 = param_4;
              }
              (*local_88)(param_2,local_80,param_3,local_118,param_5);
              _objc_release(local_70);
              _objc_release(local_120);
              _objc_release(local_128);
              _objc_release(param_2);
              return;
            }
          }
        }
      }
    }
    else if (iVar7 < -0xf7cae7) {
      if (iVar7 == -0xc85fbaa) {
        DAT_000a4170 = 3;
        iVar5 = -0x73ff420c;
      }
      else {
        iVar9 = 0x27dcaf7e;
        if (iVar7 != -0x2c3ac5d) {
          iVar9 = iVar7;
        }
        iVar5 = 0x6c2590c6;
        if (iVar7 != -0x43e9af8) {
          iVar5 = iVar9;
        }
      }
    }
    else {
      iVar5 = -0xc85fbaa;
      if (iVar7 != -0xf7cae7) {
        if (iVar7 == 0xb4741) {
          iVar5 = -0x13274fc3;
        }
        else {
          iVar5 = iVar7;
          if (iVar7 == 0x39cf612) {
            _objc_retain(param_2);
            _objc_retain(param_3);
            _objc_retain(param_5);
            iVar5 = -0x1ede1c49;
          }
        }
      }
    }
  }
  if (iVar7 < 0x357637a6) {
    if (0x19d0bd7a < iVar7) {
      if (iVar7 < 0x2a07bf26) {
        if (iVar7 < 0x24936d4a) {
          iVar5 = -0x3e8f2870;
          if (iVar7 != 0x19d0bd7b) {
            if (iVar7 == 0x1be13a27) {
              iVar5 = 0xf6cd81f;
            }
            else {
              iVar5 = iVar7;
              if (iVar7 == 0x1fa11d66) {
                local_a8 = DAT_000a40c8;
                local_99 = 1000.0 < DAT_000a40c8 - DAT_000a41a0;
                iVar5 = 0x50f2daf3;
              }
            }
          }
        }
        else if (iVar7 == 0x24936d4a) {
          iVar5 = 0xc2de11c;
        }
        else {
          if (iVar7 == 0x2686cc02) {
            iVar5 = 0x70c06633;
            bVar2 = local_d1;
            goto LAB_0005def4;
          }
          if (iVar7 == 0x27dcaf7e) {
            iVar5 = -0x72b04016;
          }
        }
      }
      else if (iVar7 < 0x3001eb16) {
        if (iVar7 == 0x2a07bf26) {
          local_e2 = _objc_msgSend(local_f0,local_108,local_f8);
          iVar5 = -0x3a764a0e;
        }
        else {
          iVar5 = -0x3e8f2870;
          if ((iVar7 != 0x2e621e62) && (iVar5 = iVar7, iVar7 == 0x2f5d3932)) {
            _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
            uVar6 = _objc_retainAutoreleasedReturnValue();
            iVar5 = _objc_msgSend(uVar6,"boolForKey:",&cf_HookWaterMark);
            _objc_release(uVar6);
            bVar4 = iVar5 == 0;
            iVar7 = 0x487eb230;
            local_78 = unaff_x23;
LAB_0005d60c:
            iVar5 = 0x65be98b8;
            if (bVar4) {
              iVar5 = iVar7;
            }
          }
        }
      }
      else if (iVar7 == 0x3001eb16) {
        iVar5 = -0x2ed7a935;
      }
      else {
        iVar5 = -0x1aebd949;
        if ((iVar7 != 0x314f3785) && (iVar5 = iVar7, iVar7 == 0x31ae6e69)) {
          _objc_msgSend(local_c0,local_b8);
          _objc_msgSend(DAT_000a4078,"enqueueSampleBuffer:",local_118);
          iVar5 = -0x3af00652;
        }
      }
      goto LAB_0005d010;
    }
    if (0x1218f8ce < iVar7) {
      if (iVar7 < 0x16aae114) {
        iVar5 = -0x5bac321e;
        if (((iVar7 != 0x1218f8cf) && (iVar5 = 0x584c544d, iVar7 != 0x167b0451)) &&
           (iVar5 = iVar7, iVar7 == 0x1694821f)) {
          iVar5 = 0x5b882cd9;
          if (local_a9 == '\0') {
            iVar5 = 0x4c27304e;
          }
          unaff_x28 = &cf_w;
        }
      }
      else if (iVar7 == 0x16aae114) {
        local_f0 = DAT_000a4070;
        local_f8 = _g_isMirroredMarkxz;
        iVar5 = 0x7be12175;
      }
      else if (iVar7 == 0x16ecd06b) {
        iVar5 = 0xb4741;
      }
      else if (iVar7 == 0x197a8901) {
        DAT_000a4170 = 3;
        iVar5 = -0xc85fbaa;
      }
      goto LAB_0005d010;
    }
    if (iVar7 < 0xbab956b) {
      if (iVar7 != 0x7e9d805) {
        if (iVar7 != 0x9c73eef) {
          iVar9 = 0xb815503;
          goto LAB_0005d654;
        }
        goto LAB_0005dc78;
      }
      DAT_000a41a0 = local_a8;
      local_98 = _CMSampleBufferGetFormatDescription(param_4);
      iVar5 = -0x4c69fd6d;
      goto LAB_0005d010;
    }
    if (iVar7 == 0xbab956b) {
      iVar5 = -0x5bac321e;
      goto LAB_0005d010;
    }
    iVar8 = 0xc2de11c;
    iVar5 = 0x69603c77;
    iVar1 = 0xf6cd81f;
    iVar9 = -0x572c335d;
  }
  else {
    if (iVar7 < 0x584c544d) {
      if (iVar7 < 0x4435e692) {
        if (iVar7 < 0x3d7242d8) {
          iVar5 = -0x6a003b5f;
          if (((iVar7 != 0x357637a6) && (iVar5 = 0x2a07bf26, iVar7 != 0x3b398584)) &&
             (iVar5 = iVar7, iVar7 == 0x3d4444b2)) {
            bVar4 = local_e2 == '\0';
            iVar7 = -0xf7cae7;
            goto LAB_0005d60c;
          }
        }
        else if (iVar7 == 0x3d7242d8) {
          iVar5 = 0x357637a6;
        }
        else if (iVar7 == 0x3f0831fa) {
          _objc_release(local_78);
          local_a9 = _objc_msgSend(DAT_000a4070,local_108,_g_isenabledw2ProChinese);
          iVar5 = 0x1694821f;
        }
        else if (iVar7 == 0x43a2a3bf) {
          _objc_msgSend(local_f0,local_108,local_f8);
          iVar5 = 0x2a07bf26;
        }
      }
      else if (iVar7 < 0x4c27304e) {
        if (iVar7 == 0x4435e692) {
          iVar5 = 0x2f5d3932;
          if (local_f9 == '\0') {
            iVar5 = -0x4480bdc3;
          }
          unaff_x23 = &cf_s__ub;
        }
        else {
          iVar5 = 0x16aae114;
          if ((iVar7 != 0x487eb230) && (iVar5 = iVar7, iVar7 == 0x4b0d93bf)) {
LAB_0005dc78:
            iVar5 = -0x7ca48d4b;
          }
        }
      }
      else if (iVar7 == 0x4c27304e) {
        iVar5 = -0x23c9fab5;
      }
      else if (iVar7 == 0x4fda7c33) {
        _objc_msgSend(local_110,"fileExistsAtPath:",_g_isenabledw2ProChinese);
        iVar5 = -0x599f67c6;
      }
      else if (iVar7 == 0x50f2daf3) {
        iVar5 = -0x41c4236b;
        if (local_99 == '\0') {
          iVar5 = 0x4b0d93bf;
        }
      }
      goto LAB_0005d010;
    }
    if (iVar7 < 0x6f2dd3ba) {
      if (iVar7 < 0x67eb0b6e) {
        if (iVar7 == 0x584c544d) {
          local_d0 = "isReadyForMoreMediaData";
          iVar5 = -0x79d7a6c5;
        }
        else if (iVar7 == 0x5b882cd9) {
          local_70 = unaff_x28;
          iVar5 = 0x1fa11d66;
        }
        else if (iVar7 == 0x65be98b8) {
          DAT_000a4170 = 1;
          iVar5 = 0x2e621e62;
        }
      }
      else {
        iVar5 = 0x16ecd06b;
        if (((iVar7 != 0x67eb0b6e) && (iVar5 = -0x5d5a3a7e, iVar7 != 0x69603c77)) &&
           (iVar5 = iVar7, iVar7 == 0x6c2590c6)) {
          _CMVideoFormatDescriptionGetDimensions(local_98);
          iVar5 = -0x2c3ac5d;
        }
      }
      goto LAB_0005d010;
    }
    if (iVar7 < 0x72c58f50) {
      if (iVar7 == 0x6f2dd3ba) {
        iVar5 = 0x31ae6e69;
      }
      else {
        iVar5 = 0x584c544d;
        if ((iVar7 != 0x70c06633) && (iVar5 = iVar7, iVar7 == 0x71e6e489)) {
          iVar5 = 0x4b0d93bf;
        }
      }
      goto LAB_0005d010;
    }
    if (iVar7 == 0x72c58f50) {
      iVar5 = -0x6a003b5f;
      goto LAB_0005d010;
    }
    iVar8 = 0x7561cf1d;
    iVar5 = 0x1218f8cf;
    iVar1 = 0x7be12175;
    iVar9 = 0x3b398584;
  }
  if (iVar7 != iVar1) {
    iVar9 = iVar7;
  }
  if (iVar7 != iVar8) {
    iVar5 = iVar9;
  }
  goto LAB_0005d010;
}



void FUN_0005e024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  
  iVar1 = 0x601e02a3;
  while( true ) {
    while( true ) {
      while (0x1af7e7e < iVar1) {
        if (iVar1 < 0xa469bba) {
          if (iVar1 == 0x1af7e7f) {
            _objc_retain(param_2);
            _objc_retain(param_3);
            _objc_retain(param_4);
            iVar1 = 0x8135ec5;
            local_80 = param_3;
            local_78 = param_4;
            local_70 = param_5;
          }
          else if (iVar1 == 0x8135ec5) {
            iVar1 = -0x7c6197c6;
          }
        }
        else if (iVar1 == 0xa469bba) {
          (*local_68)(param_2,"captureOutput:didOutputMetadataObjects:fromConnection:",param_3,
                      param_4,param_5);
          _objc_release(local_70);
          _objc_release(local_78);
          _objc_release(local_80);
          _objc_release(param_2);
          iVar1 = -0x664f01ae;
        }
        else if (iVar1 == 0x601e02a3) {
          iVar1 = 0x1af7e7f;
        }
      }
      if (iVar1 != -0x7c6197c6) break;
      _objc_retain(local_70);
      local_68 = DAT_000a41a8;
      iVar1 = -0x4aaf60f;
    }
    if (iVar1 == -0x664f01ae) break;
    if (iVar1 == -0x4aaf60f) {
      iVar1 = 0xa469bba;
    }
  }
  return;
}



void FUN_0005e1d8(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  dispatch_queue_t local_80;
  dispatch_queue_t local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  
  local_88 = param_1;
  _objc_retain(param_1);
  local_80 = _dispatch_get_global_queue(2,0);
  local_78 = local_80;
  _objc_retain(local_80);
  puVar1 = PTR___NSConcreteStackBlock_00068030;
  iVar2 = 0x11efc7f6;
  local_70 = &local_b0;
  do {
    while( true ) {
      while (0x11efc7f5 < iVar2) {
        if (iVar2 == 0x4f9b6730) {
          iVar2 = -0x69dd2bd2;
        }
        else if (iVar2 == 0x11efc7f6) {
          *local_70 = puVar1;
          local_a8 = 0xc2000000;
          iVar2 = 0x4f9b6730;
          local_68 = &uStack_a4;
        }
      }
      if (iVar2 != -0x69dd2bd2) break;
      *local_68 = 0;
      local_a0 = FUN_0005e33c;
      puStack_98 = &DAT_00068360;
      _objc_retain(local_88);
      local_90 = param_1;
      _dispatch_async(local_80,&local_b0);
      _objc_release(local_78);
      _objc_release(local_90);
      _objc_release(local_88);
      iVar2 = -0x27c423a4;
    }
  } while (iVar2 != -0x27c423a4);
  return;
}



void FUN_0005e33c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_b0 [8];
  undefined8 *local_a8;
  long local_a0;
  code *local_98;
  char local_89;
  undefined8 *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar4 = (undefined8 *)auStack_b0;
  iVar3 = 0x5b35ff9c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, 0x1c0dea4b < iVar6) {
            if (iVar6 < 0x432bd7a6) {
              if (iVar6 < 0x2870cce1) {
                if (iVar6 < 0x26733860) {
                  if (iVar6 == 0x1c0dea4c) {
                    local_a8[2] = FUN_0005ea0c;
                    local_a8[3] = &DAT_00068360;
                    puVar2 = local_a8;
                    uVar5 = _objc_retain(*(undefined8 *)(local_a0 + 0x20));
                    puVar2[4] = uVar5;
                    _dispatch_async(local_78,local_a8);
                    _objc_release(local_70);
                    local_68 = puVar2[4];
                    iVar3 = -0x6c506cec;
                  }
                  else {
                    iVar3 = -0x76a1f261;
                    if (iVar6 != 0x1f69a7ee) {
                      iVar3 = iVar6;
                    }
                  }
                }
                else if (iVar6 == 0x26733860) {
                  puVar4 = puVar4 + -6;
                  local_a8 = puVar4;
                  iVar3 = 0x55dab84c;
                }
                else {
                  iVar3 = 0x3715454c;
                  if (iVar6 != 0x26e19f08) {
                    iVar3 = iVar6;
                  }
                }
              }
              else if (iVar6 < 0x30d2f8f3) {
                if (iVar6 == 0x2870cce1) {
                  _objc_retain(PTR___dispatch_main_q_00068058);
                  *local_a8 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_a8 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_a8 + 0xc) = 0;
                  iVar3 = -0x45ea7f49;
                }
                else if (iVar6 == 0x3076b21a) {
                  local_a8[2] = FUN_0005ea0c;
                  local_a8[3] = &DAT_00068360;
                  puVar2 = local_a8;
                  uVar5 = _objc_retain(*(undefined8 *)(local_a0 + 0x20));
                  puVar2[4] = uVar5;
                  _dispatch_async(local_78,local_a8);
                  _objc_release(local_70);
                  iVar3 = 0x1c0dea4c;
                }
              }
              else if (iVar6 == 0x30d2f8f3) {
                iVar3 = -0x21a740e7;
              }
              else {
                iVar3 = 0x601db59b;
                if ((iVar6 != 0x3715454c) && (iVar3 = iVar6, iVar6 == 0x3f30ba89)) {
                  _objc_release(local_68);
                  iVar3 = 0x5d2aa349;
                }
              }
            }
            else if (iVar6 < 0x5b35ff9c) {
              if (iVar6 < 0x4aa73fec) {
                if (iVar6 == 0x432bd7a6) {
                  local_88 = (undefined8 *)(local_a0 + 0x20);
                  iVar3 = 0x26e19f08;
                }
                else if (iVar6 == 0x49f70e8f) {
                  iVar3 = 0x432bd7a6;
                }
              }
              else {
                iVar1 = 0x1f69a7ee;
                if (iVar6 != 0x55dab84c) {
                  iVar1 = iVar6;
                }
                iVar3 = 0x5d2aa349;
                if (iVar6 != 0x4aa73fec) {
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar6 < 0x601db59b) {
              iVar3 = 0x26733860;
              if ((iVar6 != 0x5b35ff9c) && (iVar3 = iVar6, iVar6 == 0x5d2aa349)) {
                _objc_release(local_68);
                iVar3 = 0x6422b59f;
              }
            }
            else if (iVar6 == 0x601db59b) {
              local_80 = *local_88;
              iVar3 = -0x417d2572;
            }
            else {
              iVar1 = -0x76a1f261;
              if (iVar6 != 0x7e92a529) {
                iVar1 = iVar6;
              }
              iVar3 = -0x5fe6fbd;
              if (iVar6 != 0x6422b59f) {
                iVar3 = iVar1;
              }
            }
          }
          if (-0x3a5633ca < iVar6) break;
          if (iVar6 < -0x58dd6db6) {
            if (iVar6 < -0x6e7bdc80) {
              if (iVar6 == -0x7ac8c9d3) {
                iVar3 = -0x2bc242d5;
              }
              else if (iVar6 == -0x76a1f261) {
                local_a0 = param_1;
                iVar3 = 0x30d2f8f3;
              }
            }
            else if (iVar6 == -0x6e7bdc80) {
              (*local_98)(local_80,1);
              iVar3 = -0x5fe6fbd;
            }
            else {
              iVar3 = 0x4aa73fec;
              if (iVar6 != -0x6c506cec) {
                iVar3 = iVar6;
              }
            }
          }
          else if (iVar6 < -0x48cbafe5) {
            iVar1 = -0x23a206a0;
            if (iVar6 != -0x4f746ddb) {
              iVar1 = iVar6;
            }
            iVar3 = 0x432bd7a6;
            if (iVar6 != -0x58dd6db6) {
              iVar3 = iVar1;
            }
          }
          else if (iVar6 == -0x48cbafe5) {
            iVar3 = -0x58dd6db6;
            if (local_89 == '\0') {
              iVar3 = -0x20aa4975;
            }
          }
          else if (iVar6 == -0x45ea7f49) {
            local_78 = PTR___dispatch_main_q_00068058;
            local_70 = PTR___dispatch_main_q_00068058;
            _objc_retain(PTR___dispatch_main_q_00068058);
            *local_a8 = PTR___NSConcreteStackBlock_00068030;
            *(undefined4 *)(local_a8 + 1) = 0xc2000000;
            *(undefined4 *)((long)local_a8 + 0xc) = 0;
            iVar3 = -0x7ac8c9d3;
          }
          else {
            iVar3 = -0x6e7bdc80;
            if (iVar6 != -0x417d2572) {
              iVar3 = iVar6;
            }
          }
        }
        if (-0x23a206a1 < iVar6) break;
        if (iVar6 < -0x315270df) {
          if (iVar6 == -0x3a5633c9) {
            _dlsym(0xfffffffffffffffe,"SBSOpenSensitiveURLAndUnlock");
            iVar3 = -0x315270df;
          }
          else {
            iVar3 = 0x26733860;
            if (iVar6 != -0x360a8013) {
              iVar3 = iVar6;
            }
          }
        }
        else if (iVar6 == -0x315270df) {
          local_98 = (code *)_dlsym(0xfffffffffffffffe,"SBSOpenSensitiveURLAndUnlock");
          local_89 = local_98 != (code *)0x0;
          iVar3 = -0x48cbafe5;
        }
        else {
          iVar1 = 0x1c0dea4c;
          if (iVar6 != -0x2bc242d5) {
            iVar1 = iVar6;
          }
          iVar3 = -0x4f746ddb;
          if (iVar6 != -0x2eaa3cb2) {
            iVar3 = iVar1;
          }
        }
      }
      if (iVar6 < -0x5fe6fbd) break;
      iVar3 = -0x4f746ddb;
      if ((iVar6 != -0x5fe6fbd) && (iVar3 = iVar6, iVar6 == 0xe10aa97)) {
        iVar3 = 0x601db59b;
      }
    }
    iVar3 = -0x315270df;
  } while (((iVar6 == -0x21a740e7) || (iVar3 = -0x45ea7f49, iVar6 == -0x20aa4975)) ||
          (iVar3 = iVar6, iVar6 != -0x23a206a0));
  return;
}



void FUN_0005ea0c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = *(undefined8 *)PTR____NSDictionary0___00068038;
  iVar1 = -0x58a42edd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar1, iVar1 = -0x1b44bcd1, iVar3 < 0x1a780c98) {
            if (iVar3 < -0x1b44bcd1) {
              iVar1 = 0x3e986165;
              if (iVar3 != -0x24b95bbf) {
                iVar1 = iVar3;
              }
              iVar2 = -0x24b95bbf;
              if (iVar3 != -0x53d78532) {
                iVar2 = iVar1;
              }
              iVar1 = 0x3122bb8c;
              if (iVar3 != -0x58a42edd) {
                iVar1 = iVar2;
              }
            }
            else if (iVar3 == -0x1b44bcd1) {
              iVar1 = 0x1a780c98;
            }
            else if (iVar3 == -0x130df507) {
              _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
              _objc_retainAutoreleasedReturnValue();
              iVar1 = 0x3122bb8c;
            }
            else if (iVar3 != 0x6e575ae) {
              iVar1 = iVar3;
            }
          }
          if (iVar3 < 0x3e986165) break;
          if (iVar3 == 0x3e986165) {
            _objc_msgSend(local_68,"openURL:options:completionHandler:",local_60,local_58,0);
            _objc_release(local_68);
            iVar1 = 0x65e34738;
          }
          else {
            iVar2 = 0x6e575ae;
            if (iVar3 != 0x65e34738) {
              iVar2 = iVar3;
            }
            if (iVar3 != 0x462b0dcc) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar3 != 0x3122bb8c) break;
        local_68 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
        _objc_retain(local_68);
        local_60 = *(undefined8 *)(param_1 + 0x20);
        local_58 = uVar4;
        iVar1 = -0x53d78532;
      }
      if (iVar3 != 0x3821b614) break;
      _objc_msgSend(local_68,"openURL:options:completionHandler:",local_60,local_58,0);
      _objc_release(local_68);
      iVar1 = 0x3e986165;
    }
    iVar1 = iVar3;
  } while (iVar3 != 0x1a780c98);
  return;
}



void FUN_0005ec40(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  
  iVar2 = -0x33a1490d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < 0x8920e96) {
            if (iVar3 < -0x2e11ee00) {
              iVar1 = 0x8920e96;
              if (iVar3 != -0x33a1490d) {
                iVar1 = iVar3;
              }
              iVar2 = 0xe659faa;
              if (iVar3 != -0x691077dd) {
                iVar2 = iVar1;
              }
            }
            else {
              iVar2 = 0x8920e96;
              if ((iVar3 != -0x2e11ee00) && (iVar2 = iVar3, iVar3 == -0x1f20e53c)) {
                local_38 = local_48;
                iVar2 = -0x691077dd;
              }
            }
          }
          if (0x2226b408 < iVar3) break;
          if (iVar3 == 0x8920e96) {
            local_48 = *(undefined8 *)(param_1 + 0x20);
            local_40 = "dismissViewControllerAnimated:completion:";
            iVar2 = 0x4fb40b87;
          }
          else if (iVar3 == 0xe659faa) {
            _objc_msgSend(local_38,local_40,1,0);
            iVar2 = 0x72e75105;
          }
        }
        if (iVar3 != 0x2226b409) break;
        _objc_msgSend(local_38,local_40,1,0);
        iVar2 = 0xe659faa;
      }
      if (iVar3 != 0x4fb40b87) break;
      iVar2 = -0x1f20e53c;
    }
  } while (iVar3 != 0x72e75105);
  return;
}



void FUN_0005eddc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *local_8;
  
  iVar2 = 0x5a469c7e;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, 0x3c267cfb < iVar3) {
          if (iVar3 < 0x5a469c7e) {
            if (iVar3 == 0x3c267cfc) {
              iVar2 = -0x3700cd10;
              local_8 = (undefined8 *)(param_1 + 0x20);
            }
            else {
              iVar2 = -0x220a04e0;
              if (iVar3 != 0x4a8f1a5e) {
                iVar2 = iVar3;
              }
            }
          }
          else {
            iVar1 = iVar3;
            if (iVar3 == 0x5a469c7e) {
              iVar1 = -0x627e1bf4;
            }
            iVar2 = -0x627e1bf4;
            if (iVar3 != 0x7aa921ae) {
              iVar2 = iVar1;
            }
          }
        }
        if (-0x220a04e1 < iVar3) break;
        iVar1 = 0x1cb5ba9d;
        if (iVar3 != -0x3700cd10) {
          iVar1 = iVar3;
        }
        iVar2 = 0x4a8f1a5e;
        if (iVar3 != -0x627e1bf4) {
          iVar2 = iVar1;
        }
      }
      if (iVar3 != -0x220a04e0) break;
      iVar2 = 0x3c267cfc;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x1cb5ba9d);
  _objc_msgSend(*local_8,"dismissViewControllerAnimated:completion:",1,0);
  return;
}



void FUN_0005ef04(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  
  iVar1 = -0x581f3943;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < -0x1bc63b4c) {
          if (iVar3 < -0x578e95b3) {
            if (iVar3 == -0x7be744a0) {
              local_38 = *(undefined8 *)(param_1 + 0x20);
              iVar1 = -0x334e6548;
            }
            else {
              iVar2 = -0x7be744a0;
              if (iVar3 != -0x581f3943) {
                iVar2 = iVar3;
              }
              iVar1 = -0x7be744a0;
              if (iVar3 != -0x70ee4f75) {
                iVar1 = iVar2;
              }
            }
          }
          else {
            iVar1 = -0x1bc63b4c;
            if (iVar3 != -0x1d55a4af) {
              iVar1 = iVar3;
            }
            iVar2 = -0x703fac4;
            if (iVar3 != -0x334e6548) {
              iVar2 = iVar1;
            }
            iVar1 = -0x1bc63b4c;
            if (iVar3 != -0x578e95b3) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar3 < 0x47bda871) break;
        if (iVar3 == 0x47bda871) {
          _objc_msgSend(local_38,"dismissViewControllerAnimated:completion:",1,0);
          iVar1 = 0x785e7ec3;
        }
        else if (iVar3 == 0x5e58b7e7) {
          _objc_msgSend(local_38,"dismissViewControllerAnimated:completion:",1,0);
          iVar1 = 0x47bda871;
        }
        else {
          iVar1 = -0x578e95b3;
          if (iVar3 != 0x785e7ec3) {
            iVar1 = iVar3;
          }
        }
      }
      if (iVar3 != -0x1bc63b4c) break;
      iVar1 = 0x24e229e7;
    }
    iVar1 = 0x47bda871;
  } while ((iVar3 == -0x703fac4) || (iVar1 = iVar3, iVar3 != 0x24e229e7));
  return;
}



void FUN_0005f0d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = -0x5107a827;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar3 < -0x38d4e7b8) {
          if (iVar3 < -0x5107a827) {
            iVar2 = 0x5c53bfb6;
            if ((iVar3 != -0x7ad6963f) && (iVar2 = iVar3, iVar3 == -0x6d7e5444)) {
              ___cxa_atexit(FUN_00049e7c,0,0);
              iVar2 = -0x38d4e7b8;
            }
          }
          else {
            iVar1 = 0x5c53bfb6;
            if (iVar3 != -0x44916e08) {
              iVar1 = iVar3;
            }
            iVar2 = -0x38d4e7b8;
            if (iVar3 != -0x5107a827) {
              iVar2 = iVar1;
            }
          }
        }
        if (0x3e54e1ff < iVar3) break;
        if (iVar3 == -0x38d4e7b8) {
          ___cxa_atexit(FUN_00049e7c,0,0);
          iVar2 = 0x1f2d26bd;
        }
        else {
          iVar2 = -0x44916e08;
          if (iVar3 != 0x1f2d26bd) {
            iVar2 = iVar3;
          }
        }
      }
      if (iVar3 != 0x5c53bfb6) break;
      iVar2 = 0x3e54e200;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x3e54e200);
  return;
}



bool FUN_0005f228(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_000a41c0 == -1) {
    iVar1 = DAT_000a41b0 - param_1;
    if (param_1 < DAT_000a41b0) {
      return true;
    }
  }
  else {
    _dispatch_once_f(&DAT_000a41c0,(void *)0x0,FUN_0005f2ec);
    iVar1 = DAT_000a41b0 - param_1;
    if (param_1 < DAT_000a41b0) {
      return true;
    }
  }
  if (iVar1 < 0 == SBORROW4(DAT_000a41b0,param_1)) {
    if (param_2 < DAT_000a41b4) {
      return true;
    }
    if (param_2 <= DAT_000a41b4) {
      return param_3 <= DAT_000a41b8;
    }
  }
  return false;
}



void FUN_0005f2ec(void)

{
  FUN_0005f440(1);
  return;
}



void FUN_0005f2f4(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00068050;
  if (DAT_000a41c8 == -1) {
    if (DAT_000a41d0 == (code *)0x0) {
code_r0x0005f388:
      if (DAT_000a41c0 == -1) {
        iVar1 = DAT_000a41b0 - param_2;
      }
      else {
        _dispatch_once_f(&DAT_000a41c0,(void *)0x0,FUN_0005f2ec);
        iVar1 = DAT_000a41b0 - param_2;
      }
      if (param_2 < DAT_000a41b0) {
LAB_0005f3b8:
        uVar2 = 1;
      }
      else {
        if (iVar1 < 0 == SBORROW4(DAT_000a41b0,param_2)) {
          if ((int)param_3 < DAT_000a41b4) goto LAB_0005f3b8;
          if ((int)param_3 <= DAT_000a41b4) {
            uVar2 = (ulong)((int)param_4 <= DAT_000a41b8);
            goto LAB_0005f3c8;
          }
        }
        uVar2 = 0;
      }
      goto LAB_0005f3c8;
    }
  }
  else {
    _dispatch_once_f(&DAT_000a41c8,(void *)0x0,FUN_0005f438);
    if (DAT_000a41d0 == (code *)0x0) goto code_r0x0005f388;
  }
  uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
  local_40 = param_1;
  uVar2 = (*DAT_000a41d0)(1,&local_40);
LAB_0005f3c8:
  if (*(long *)PTR____stack_chk_guard_00068050 == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar2);
}



void FUN_0005f438(void)

{
  FUN_0005f440(0);
  return;
}



void FUN_0005f440(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  FILE *pFVar3;
  FILE *pFVar4;
  code *pcVar5;
  FILE *pFVar6;
  FILE *pFVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  FILE *pFVar12;
  size_t sVar13;
  void *pvVar14;
  size_t sVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uchar *puVar21;
  char acStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_00068050;
  pFVar3 = param_1;
  if ((DAT_000a41d0 == (FILE *)0x0 || (int)param_1 != 0) &&
     (((DAT_000a41d0 = (FILE *)_dlsym(0xfffffffffffffffe,"_availability_version_check"),
       DAT_000a41d0 == (FILE *)0x0 || (pFVar3 = DAT_000a41d0, (int)param_1 != 0)) &&
      (pFVar3 = (FILE *)_dlsym(0xfffffffffffffffe,"kCFAllocatorNull"), pFVar3 != (FILE *)0x0)))) {
    puVar21 = pFVar3->_p;
    pFVar4 = (FILE *)_dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
    pFVar3 = pFVar4;
    if (pFVar4 != (FILE *)0x0) {
      pcVar5 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
      pFVar6 = (FILE *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
      pFVar3 = pFVar6;
      if (((((pcVar5 != (code *)0x0 || pFVar6 != (FILE *)0x0) &&
            (pFVar7 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy"),
            pFVar3 = pFVar7, pFVar7 != (FILE *)0x0)) &&
           ((pFVar8 = (FILE *)_dlsym(0xfffffffffffffffe,"CFDictionaryGetValue"), pFVar3 = pFVar8,
            pFVar8 != (FILE *)0x0 &&
            ((pFVar9 = (FILE *)_dlsym(0xfffffffffffffffe,"CFGetTypeID"), pFVar3 = pFVar9,
             pFVar9 != (FILE *)0x0 &&
             (pFVar10 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringGetTypeID"), pFVar3 = pFVar10,
             pFVar10 != (FILE *)0x0)))))) &&
          (pFVar11 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringGetCString"), pFVar3 = pFVar11,
          pFVar11 != (FILE *)0x0)) &&
         ((pFVar12 = (FILE *)_dlsym(0xfffffffffffffffe,"CFRelease"), pFVar3 = pFVar12,
          pFVar12 != (FILE *)0x0 &&
          (pFVar3 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r"),
          pFVar3 != (FILE *)0x0)))) {
        _fseek(pFVar3,0,2);
        sVar13 = _ftell(pFVar3);
        if ((long)sVar13 < 0) {
          pvVar14 = (void *)0x0;
        }
        else {
          _rewind(pFVar3);
          pvVar14 = _malloc(sVar13);
          if (((pvVar14 != (void *)0x0) &&
              (sVar15 = _fread(pvVar14,1,sVar13,pFVar3), sVar15 == sVar13)) &&
             (lVar16 = (*(code *)pFVar4)(0,pvVar14,sVar13,puVar21), lVar16 != 0)) {
            if (pcVar5 == (code *)0x0) {
              lVar17 = (*(code *)pFVar6)(0,lVar16,0,0);
            }
            else {
              lVar17 = (*pcVar5)();
            }
            if (lVar17 != 0) {
              lVar18 = (*(code *)pFVar7)(0,"ProductVersion",0x600,puVar21);
              if (lVar18 != 0) {
                lVar19 = (*(code *)pFVar8)(lVar17,lVar18);
                (*(code *)pFVar12)(lVar18);
                if (lVar19 != 0) {
                  lVar18 = (*(code *)pFVar9)(lVar19);
                  lVar20 = (*(code *)pFVar10)();
                  if ((lVar18 == lVar20) &&
                     (iVar1 = (*(code *)pFVar11)(lVar19,acStack_88,0x20,0x8000100), iVar1 != 0)) {
                    _sscanf(acStack_88,"%d.%d.%d");
                  }
                }
              }
              (*(code *)pFVar12)(lVar17);
            }
            (*(code *)pFVar12)(lVar16);
          }
        }
        _free(pvVar14);
        uVar2 = _fclose(pFVar3);
        pFVar3 = (FILE *)(ulong)uVar2;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00068050 == local_68) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(pFVar3);
}



void FUN_0005f770(void)

{
  code *pcVar1;
  
  _CFBundleGetVersionNumber(0);
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5f780);
  (*pcVar1)();
}



void _AudioServicesPlaySystemSound(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f788. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__AudioServicesPlaySystemSound_00068078)();
  return;
}



void _CATransform3DMakeRotation(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f794. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CATransform3DMakeRotation_00068080)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

CCCryptorStatus
_CCCrypt(CCOperation op,CCAlgorithm alg,CCOptions options,void *key,size_t keyLength,void *iv,
        void *dataIn,size_t dataInLength,void *dataOut,size_t dataOutAvailable,size_t *dataOutMoved)

{
  CCCryptorStatus CVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f7a0. Too many branches
                    // WARNING: Treating indirect jump as call
  CVar1 = (*(code *)PTR__CCCrypt_00068088)(op,alg,options);
  return CVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uchar * _CC_MD5(void *data,CC_LONG len,uchar *md)

{
  uchar *puVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f7ac. Too many branches
                    // WARNING: Treating indirect jump as call
  puVar1 = (uchar *)(*(code *)PTR__CC_MD5_00068090)(data,len);
  return puVar1;
}



void _CFBundleGetVersionNumber(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f7b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFBundleGetVersionNumber_00068098)();
  return;
}



void _CFNotificationCenterAddObserver(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f7c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFNotificationCenterAddObserver_000680a0)();
  return;
}



void _CFNotificationCenterGetDarwinNotifyCenter(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f7d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFNotificationCenterGetDarwinNotifyCenter_000680a8)();
  return;
}



void _CFRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f7dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFRelease_000680b0)();
  return;
}



void _CGAffineTransformConcat(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f7e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CGAffineTransformConcat_000680b8)();
  return;
}



void _CGAffineTransformMakeRotation(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f7f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CGAffineTransformMakeRotation_000680c0)();
  return;
}



void _CGAffineTransformMakeScale(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f800. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CGAffineTransformMakeScale_000680c8)();
  return;
}



void _CMFormatDescriptionGetMediaSubType(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f80c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMFormatDescriptionGetMediaSubType_000680d0)();
  return;
}



void _CMFormatDescriptionGetMediaType(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f818. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMFormatDescriptionGetMediaType_000680d8)();
  return;
}



void _CMGetAttachment(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f824. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMGetAttachment_000680e0)();
  return;
}



void _CMSampleBufferCreateCopy(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f830. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferCreateCopy_000680e8)();
  return;
}



void _CMSampleBufferCreateForImageBuffer(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f83c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferCreateForImageBuffer_000680f0)();
  return;
}



void _CMSampleBufferGetDecodeTimeStamp(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f848. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetDecodeTimeStamp_000680f8)();
  return;
}



void _CMSampleBufferGetDuration(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f854. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetDuration_00068100)();
  return;
}



void _CMSampleBufferGetFormatDescription(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f860. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetFormatDescription_00068108)();
  return;
}



void _CMSampleBufferGetImageBuffer(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f86c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetImageBuffer_00068110)();
  return;
}



void _CMSampleBufferGetPresentationTimeStamp(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f878. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetPresentationTimeStamp_00068118)();
  return;
}



void _CMSampleBufferIsValid(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f884. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferIsValid_00068120)();
  return;
}



void _CMSetAttachment(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f890. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSetAttachment_00068128)();
  return;
}



void _CMVideoFormatDescriptionCreateForImageBuffer(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f89c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMVideoFormatDescriptionCreateForImageBuffer_00068130)();
  return;
}



void _CMVideoFormatDescriptionGetDimensions(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f8a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMVideoFormatDescriptionGetDimensions_00068138)();
  return;
}



void _MSHookMessageEx(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f8b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__MSHookMessageEx_00068140)();
  return;
}



void _NSClassFromString(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f8c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSClassFromString_00068148)();
  return;
}



void _NSLog(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f8cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSLog_00068150)();
  return;
}



void _NSSearchPathForDirectoriesInDomains(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f8d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSSearchPathForDirectoriesInDomains_00068158)();
  return;
}



void _NSStringFromClass(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f8e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSStringFromClass_00068160)();
  return;
}



void _UIImageJPEGRepresentation(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f8f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__UIImageJPEGRepresentation_00068168)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __Block_object_assign(void *param_1,void *param_2,int param_3)

{
                    // WARNING: Could not recover jumptable at 0x0005f8fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Block_object_assign_00068170)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __Block_object_dispose(void *param_1,int param_2)

{
                    // WARNING: Could not recover jumptable at 0x0005f908. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Block_object_dispose_00068178)(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __Unwind_Resume(_Unwind_Exception *exception_object)

{
                    // WARNING: Could not recover jumptable at 0x0005f914. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Unwind_Resume_00068180)();
  return;
}



void ___cxa_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f920. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_atexit_00068188)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f92c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_00068190)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

u_int32_t _arc4random(void)

{
  u_int32_t uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f938. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__arc4random_00068198)();
  return uVar1;
}



void _class_addMethod(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f944. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_addMethod_000681a0)();
  return;
}



void _class_getInstanceMethod(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f950. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_getInstanceMethod_000681a8)();
  return;
}



void _class_getMethodImplementation(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f95c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_getMethodImplementation_000681b0)();
  return;
}



void _class_getSuperclass(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f968. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_getSuperclass_000681b8)();
  return;
}



void _dispatch_after(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f974. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dispatch_after_000681c0)();
  return;
}



void _dispatch_async(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f980. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dispatch_async_000681c8)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

dispatch_queue_t _dispatch_get_global_queue(dispatch_queue_priority_t priority,ulong flags)

{
  dispatch_queue_t pdVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f98c. Too many branches
                    // WARNING: Treating indirect jump as call
  pdVar1 = (dispatch_queue_t)(*(code *)PTR__dispatch_get_global_queue_000681d0)();
  return pdVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _dispatch_once_f(dispatch_once_t *predicate,void *context,dispatch_function_t function)

{
                    // WARNING: Could not recover jumptable at 0x0005f998. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dispatch_once_f_000681d8)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

dispatch_time_t _dispatch_time(dispatch_time_t when,int64_t delta)

{
  dispatch_time_t dVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f9a4. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (*(code *)PTR__dispatch_time_000681e0)();
  return dVar1;
}



void _dlsym(void)

{
                    // WARNING: Could not recover jumptable at 0x0005f9b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dlsym_000681e8)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f9bc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_000681f0)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f9c8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_000681f8)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f9d4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_00068200)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0005f9e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_00068208)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f9ec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fseek_00068210)((int)param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _ftell(FILE *param_1)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005f9f8. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__ftell_00068218)();
  return lVar1;
}



void _imp_implementationWithBlock(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__imp_implementationWithBlock_00068220)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005fa10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_00068228)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005fa1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_00068230)();
  return pvVar1;
}



void _method_getImplementation(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__method_getImplementation_00068238)();
  return;
}



void _method_getTypeEncoding(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__method_getTypeEncoding_00068240)();
  return;
}



void _method_setImplementation(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__method_setImplementation_00068248)();
  return;
}



void _objc_alloc(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_alloc_00068250)();
  return;
}



void _objc_autorelease(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autorelease_00068258)();
  return;
}



void _objc_autoreleasePoolPop(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autoreleasePoolPop_00068260)();
  return;
}



void _objc_autoreleasePoolPush(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autoreleasePoolPush_00068268)();
  return;
}



void _objc_autoreleaseReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autoreleaseReturnValue_00068270)();
  return;
}



void _objc_begin_catch(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_begin_catch_00068278)();
  return;
}



void _objc_end_catch(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fa94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_end_catch_00068280)();
  return;
}



void _objc_enumerationMutation(void)

{
                    // WARNING: Could not recover jumptable at 0x0005faa0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_enumerationMutation_00068288)();
  return;
}



void _objc_getClass(void)

{
                    // WARNING: Could not recover jumptable at 0x0005faac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_getClass_00068290)();
  return;
}



void _objc_getProperty(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fab8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_getProperty_00068298)();
  return;
}



void _objc_msgSend(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fac4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_msgSend_000682a0)();
  return;
}



void _objc_msgSendSuper2(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fad0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_msgSendSuper2_000682a8)();
  return;
}



void _objc_release(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fadc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_release_000682b0)();
  return;
}



void _objc_retain(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fae8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retain_000682b8)();
  return;
}



void _objc_retainAutorelease(void)

{
                    // WARNING: Could not recover jumptable at 0x0005faf4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainAutorelease_000682c0)();
  return;
}



void _objc_retainAutoreleaseReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fb00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_000682c8)();
  return;
}



void _objc_retainAutoreleasedReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fb0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_000682d0)();
  return;
}



void _objc_retainBlock(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fb18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainBlock_000682d8)();
  return;
}



void _objc_setProperty_nonatomic_copy(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fb24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_setProperty_nonatomic_copy_000682e0)();
  return;
}



void _objc_storeStrong(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fb30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_storeStrong_000682e8)();
  return;
}



void _objc_unsafeClaimAutoreleasedReturnValue(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fb3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_unsafeClaimAutoreleasedReturnValue_000682f0)();
  return;
}



void _object_getClass(void)

{
                    // WARNING: Could not recover jumptable at 0x0005fb48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__object_getClass_000682f8)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _rewind(FILE *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0005fb54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__rewind_00068300)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005fb60. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_00068308)(param_1);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005fb6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_00068310)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005fb78. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_00068318)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _uname(utsname *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0005fb84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__uname_00068320)((int)param_1);
  return iVar1;
}