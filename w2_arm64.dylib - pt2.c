// Function Stack Size: 0x2c bytes

ID GTMBase64::baseDecode_length_charset_requirePadding_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4,
             const_char__ param_5,bool param_6)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ID unaff_x27;
  ID IVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long local_b8;
  ID local_b0;
  ID local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  long local_80;
  char local_72;
  char local_71;
  ID local_70;
  ID local_68;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_80;
  iVar4 = 0x6b341820;
LAB_0000c79c:
  while( true ) {
    iVar2 = iVar4;
    IVar6 = unaff_x27;
    local_80 = auVar7._0_8_;
    unaff_x27 = IVar6;
    iVar4 = 0x662bc2c0;
    if (0x1049eb40 < iVar2) break;
    if (iVar2 < -0x33065b11) {
      if (iVar2 < -0x4d1ff567) {
        if (iVar2 < -0x5d7218d0) {
          iVar5 = -0x4d1ff567;
          if (iVar2 != -0x5ebba728) {
            iVar5 = iVar2;
          }
          iVar4 = -0x5d7218d0;
          if (iVar2 != -0x75e01b70) {
            iVar4 = iVar5;
          }
        }
        else if (iVar2 == -0x5d7218d0) {
          iVar4 = 0x3f9fc08d;
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == -0x58266dfc) {
            iVar4 = 0x502a2fe5;
          }
        }
      }
      else if (iVar2 < -0x470ff87a) {
        iVar5 = -0x5ebba728;
        if (iVar2 != -0x4b464ad6) {
          iVar5 = iVar2;
        }
        unaff_x27 = 0;
        iVar4 = 0x126d5e81;
        if (iVar2 != -0x4d1ff567) {
          unaff_x27 = IVar6;
          iVar4 = iVar5;
        }
      }
      else if (iVar2 == -0x470ff87a) {
        _objc_release(local_b0,auVar7._8_8_);
        auVar7._8_8_ = extraout_x1_02;
        auVar7._0_8_ = local_80;
        iVar4 = 0x776bb2fd;
      }
      else if (iVar2 == -0x419957f2) {
        _objc_msgSend(local_b0,local_a0,local_80);
        auVar7._8_8_ = extraout_x1_03;
        auVar7._0_8_ = local_80;
        iVar4 = 0x17558897;
      }
      else {
        iVar4 = iVar2;
        if (iVar2 == -0x3b998a29) {
          _objc_retainAutorelease(local_68);
          _objc_release(local_68);
          auVar7._8_8_ = extraout_x1;
          auVar7._0_8_ = local_80;
          iVar4 = 0x424dce3b;
        }
      }
    }
    else if (iVar2 < -0x25f99041) {
      if (iVar2 < -0x2cf49655) {
        iVar3 = -0x33065b11;
        iVar4 = 0x32bd5327;
        iVar5 = -0x5d7218d0;
        if (iVar2 != -0x31e99ee9) {
          iVar5 = iVar2;
        }
        goto LAB_0000cb80;
      }
      if (iVar2 == -0x2cf49655) {
        unaff_x27 = local_a8;
        iVar4 = 0x126d5e81;
      }
      else if (iVar2 == -0x2bb83a14) {
        unaff_x27 = local_a8;
        iVar4 = -0x419957f2;
        if (local_71 == '\0') {
          unaff_x27 = local_a8;
          iVar4 = 0x126d5e81;
        }
      }
      else if (iVar2 != -0x26231bf2) {
        iVar4 = iVar2;
      }
    }
    else if (iVar2 < -0xb972d20) {
      iVar5 = -0x470ff87a;
      if (iVar2 != -0x101608f0) {
        iVar5 = iVar2;
      }
      iVar4 = 0x7b55462a;
      if (iVar2 != -0x25f99041) {
        iVar4 = iVar5;
      }
    }
    else {
      iVar4 = 0x502a2fe5;
      if (iVar2 != -0x61dd4fe) {
        if (iVar2 == 0x6df7b14) {
          auVar7 = _objc_msgSend(param_1,local_88,param_3,param_4,local_98,local_90,param_5,param_6)
          ;
          local_72 = auVar7._0_8_ != 0;
          iVar4 = 0x6f455eaa;
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == -0xb972d20) {
            return local_70;
          }
        }
      }
    }
  }
  if (iVar2 < 0x404856bd) {
    if (iVar2 < 0x22bd50f9) {
      if (iVar2 < 0x17115c1b) {
        iVar4 = -0x5ebba728;
        if ((iVar2 != 0x1049eb41) && (iVar4 = iVar2, iVar2 == 0x126d5e81)) {
          local_68 = IVar6;
          iVar4 = 0x424dce3b;
        }
      }
      else if (iVar2 == 0x17115c1b) {
        _objc_msgSend(param_1,local_88,param_3,param_4,local_98,local_90,param_5,param_6);
        auVar7._8_8_ = extraout_x1_01;
        auVar7._0_8_ = local_80;
        iVar4 = 0x6df7b14;
      }
      else {
        iVar4 = 0x7b55462a;
        if (iVar2 != 0x17558897) {
          iVar4 = iVar2;
        }
      }
      goto LAB_0000c79c;
    }
    if (0x32bd5326 < iVar2) {
      if (iVar2 == 0x32bd5327) {
        local_b8 = FUN_0000cdc4(param_4);
        local_b0 = _objc_msgSend(&_OBJC_CLASS___NSMutableData,"data");
        _objc_retain(local_b0);
        local_a0 = "setLength:";
        _objc_msgSend(local_b0,"setLength:",local_b8);
        _objc_retainAutorelease(local_b0);
        local_98 = _objc_msgSend(local_b0,"mutableBytes");
        auVar8 = _objc_msgSend(local_b0,"length");
        auVar7._8_8_ = auVar8._8_8_;
        auVar7._0_8_ = local_80;
        local_90 = auVar8._0_8_;
        local_88 = "baseDecode:srcLen:destBytes:destLen:charset:requirePadding:";
        local_a8 = local_b0;
        iVar4 = 0x3c5d0fa8;
      }
      else {
        iVar5 = -0x101608f0;
        if (iVar2 != 0x3f9fc08d) {
          iVar5 = iVar2;
        }
        iVar4 = 0x6df7b14;
        if (iVar2 != 0x3c5d0fa8) {
          iVar4 = iVar5;
        }
      }
      goto LAB_0000c79c;
    }
    iVar3 = 0x22bd50f9;
    iVar4 = -0x33065b11;
    iVar1 = 0x2dc7bbe1;
    iVar5 = 0x562f1c69;
  }
  else {
    if (iVar2 < 0x662bc2c0) {
      if (iVar2 < 0x502a2fe5) {
        if (iVar2 == 0x404856bd) {
          _objc_release(local_b0,auVar7._8_8_);
          auVar7._8_8_ = extraout_x1_04;
          auVar7._0_8_ = local_80;
          iVar4 = -0x470ff87a;
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == 0x424dce3b) {
            local_70 = local_68;
            _objc_retainAutorelease(local_68);
            _objc_release(local_68);
            auVar7._8_8_ = extraout_x1_00;
            auVar7._0_8_ = local_80;
            iVar4 = -0xb972d20;
          }
        }
      }
      else if (iVar2 == 0x502a2fe5) {
        local_71 = local_80 != local_b8;
        iVar4 = 0x2dc7bbe1;
      }
      else {
        iVar5 = 0x22bd50f9;
        if (iVar2 != 0x63b87595) {
          iVar5 = iVar2;
        }
        if (iVar2 != 0x562f1c69) {
          iVar4 = iVar5;
        }
      }
      goto LAB_0000c79c;
    }
    if (iVar2 < 0x6f455eaa) {
      iVar3 = 0x662bc2c0;
      iVar4 = -0x2bb83a14;
      iVar5 = 0x22bd50f9;
      if (iVar2 != 0x6b341820) {
        iVar5 = iVar2;
      }
      goto LAB_0000cb80;
    }
    if (iVar2 == 0x6f455eaa) {
      iVar4 = -0x61dd4fe;
      if (local_72 == '\0') {
        iVar4 = -0x75e01b70;
      }
      goto LAB_0000c79c;
    }
    iVar3 = 0x776bb2fd;
    iVar4 = -0x4b464ad6;
    iVar1 = 0x7b55462a;
    iVar5 = -0x2cf49655;
  }
  if (iVar2 != iVar1) {
    iVar5 = iVar2;
  }
LAB_0000cb80:
  if (iVar2 != iVar3) {
    iVar4 = iVar5;
  }
  goto LAB_0000c79c;
}



long FUN_0000cdc4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar3 = -0x2827bf00;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar3, iVar4 < 0x29c07c8) {
            iVar3 = -0x4fe3e804;
            if (iVar4 < -0x2827bf00) {
              if (iVar4 == -0x4fe3e804) {
                iVar3 = -0x1e82cb93;
                local_10 = param_1 + 3;
              }
              else if (iVar4 != -0x3694ece8) {
                iVar3 = iVar4;
              }
            }
            else {
              iVar1 = 0x54efdafc;
              if (iVar4 != -0x1e82cb93) {
                iVar1 = iVar4;
              }
              iVar2 = 0x2488a21b;
              if (iVar4 != -0x20a5c517) {
                iVar2 = iVar1;
              }
              if (iVar4 != -0x2827bf00) {
                iVar3 = iVar2;
              }
            }
          }
          if (0x2d295edc < iVar4) break;
          if (iVar4 == 0x29c07c8) {
            local_8 = (local_10 >> 2) * 2 + (local_10 >> 2);
            iVar3 = 0x6f8b8fdb;
          }
          else {
            iVar1 = 0x2d295edd;
            if (iVar4 != 0x2488a21b) {
              iVar1 = iVar4;
            }
            iVar3 = 0x2488a21b;
            if (iVar4 != 0x4c8ba67) {
              iVar3 = iVar1;
            }
          }
        }
        if (iVar4 != 0x54efdafc) break;
        iVar3 = 0x29c07c8;
      }
      if (iVar4 != 0x6f8b8fdb) break;
      iVar3 = -0x20a5c517;
    }
    iVar3 = iVar4;
  } while (iVar4 != 0x2d295edd);
  return local_8;
}



// Function Stack Size: 0x3c bytes

unsigned_long_long
GTMBase64::baseEncode_srcLen_destBytes_destLen_charset_padded_
          (ID param_1,SEL param_2,const_char__ param_3,unsigned_long_long param_4,char *param_5,
          unsigned_long_long param_6,const_char__ param_7,bool param_8)

{
  unsigned_long_long uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0000cf6c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_0006f9b0)();
  return uVar1;
}



// Function Stack Size: 0x3c bytes

unsigned_long_long
GTMBase64::baseDecode_srcLen_destBytes_destLen_charset_requirePadding_
          (ID param_1,SEL param_2,const_char__ param_3,unsigned_long_long param_4,char *param_5,
          unsigned_long_long param_6,const_char__ param_7,bool param_8)

{
  unsigned_long_long uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0000da7c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_0006ff00)();
  return uVar1;
}



byte FUN_0000e710(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong local_10;
  byte local_2;
  byte local_1;
  
  iVar2 = -0x34033bd8;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < -0x929a096) {
          if (iVar3 < -0x1eec559d) {
            iVar1 = 0x53c02f31;
            if (iVar3 != -0x34033bd8) {
              iVar1 = iVar3;
            }
            iVar2 = -0x1eec559d;
            if (iVar3 != -0x71d88486) {
              iVar2 = iVar1;
            }
          }
          else if (iVar3 == -0x1eec559d) {
            local_2 = " !\"#$%&\'()*+,-./0123ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"
                      [local_10 + 0x99];
            iVar2 = 0x5e9ace4d;
          }
          else if (iVar3 == -0x101aa6b4) {
            local_1 = local_2 & 1;
            iVar2 = 0x3b07fb00;
          }
        }
        if (iVar3 < 0x53c02f31) break;
        if (iVar3 == 0x53c02f31) {
          iVar2 = -0x71d88486;
          local_10 = param_1 & 0xffffffff;
        }
        else {
          iVar2 = -0x101aa6b4;
          if (iVar3 != 0x5e9ace4d) {
            iVar2 = iVar3;
          }
        }
      }
      if (iVar3 != -0x929a096) break;
      iVar2 = -0x101aa6b4;
    }
  } while (iVar3 != 0x3b07fb00);
  return local_1;
}


/*
Unable to decompile 'viewDidLoad'
Cause: Exception while decompiling 0000e83c: process: timeout

*/


undefined1  [16] FUN_000277d4(ulong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 local_20;
  
  iVar1 = -0x6bbd9ed0;
  while( true ) {
    while( true ) {
      while (iVar1 < -0x41263c37) {
        if (iVar1 == -0x7c5c7258) {
          iVar1 = -0x18c7f8c2;
          local_20 = param_1;
        }
        else if (iVar1 == -0x6bbd9ed0) {
          iVar1 = -0x41263c37;
        }
        else if (iVar1 == -0x58eb5354) {
          iVar1 = 0x460869ac;
        }
      }
      if (-0x18c7f8c3 < iVar1) break;
      if (iVar1 == -0x41263c37) {
        iVar1 = -0x3c4c5d2b;
      }
      else if (iVar1 == -0x3c4c5d2b) {
        iVar1 = -0x58eb5354;
      }
    }
    if (iVar1 == -0x18c7f8c2) break;
    if (iVar1 == 0x460869ac) {
      iVar1 = -0x7c5c7258;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_20;
  return auVar2;
}



undefined1  [16] FUN_000278dc(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined8 local_10;
  
  iVar1 = 0x531d1237;
  do {
    while( true ) {
      while (iVar4 = iVar1, iVar4 < 0x199e996d) {
        iVar1 = 0x4c386e10;
        if (iVar4 != 0x119e7e52) {
          iVar1 = iVar4;
        }
        iVar2 = 0x4c386e10;
        if (iVar4 != 0xaf9583e) {
          iVar2 = iVar1;
        }
        iVar1 = 0x2a5514cc;
        if (iVar4 != -0x9b5c6fd) {
          iVar1 = iVar2;
        }
        iVar2 = 0x199e996d;
        if (iVar4 != -0x2c3e1c37) {
          iVar2 = iVar4;
        }
        iVar3 = -0x2c3e1c37;
        if (iVar4 != -0x3d2b03ae) {
          iVar3 = iVar2;
        }
        if (iVar4 < -0x9b5c6fd) {
          iVar1 = iVar3;
        }
      }
      if (0x531d1236 < iVar4) break;
      if (iVar4 == 0x199e996d) {
        iVar1 = 0x6b757313;
      }
      else if (iVar4 == 0x2a5514cc) {
        iVar1 = 0xaf9583e;
      }
      else {
        iVar1 = iVar4;
        if (iVar4 == 0x4c386e10) {
          iVar1 = -0x3d2b03ae;
          local_10 = param_1;
        }
      }
    }
    iVar1 = -0x9b5c6fd;
  } while (((iVar4 == 0x531d1237) || (iVar1 = -0x9b5c6fd, iVar4 == 0x550eb506)) ||
          (iVar1 = iVar4, iVar4 != 0x6b757313));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_10;
  return auVar5;
}



void FUN_00027a38(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auStack_e0 [8];
  undefined8 *local_d8;
  long local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_79;
  undefined *local_78;
  undefined *local_70;
  undefined8 *local_68;
  
  puVar7 = (undefined8 *)auStack_e0;
  iVar1 = -0x44e2e283;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (iVar10 = iVar1, iVar1 = iVar10, -0xa3ba83e < iVar10) {
              if (iVar10 < 0x370435ca) {
                if (iVar10 < 0xf9f815f) {
                  iVar1 = -0x51d3a007;
                  if (iVar10 != -0xa3ba83d) {
                    if (iVar10 == -0x99e80f9) {
                      *local_68 = &DAT_000683c0;
                      local_d8[4] = *(undefined8 *)(local_d0 + 0x20);
                      puVar3 = local_d8;
                      _objc_retain(local_90);
                      puVar3[5] = local_88;
                      puVar4 = local_d8;
                      uVar8 = _objc_retain(*(undefined8 *)(local_d0 + 0x28));
                      puVar4[6] = uVar8;
                      puVar5 = local_d8;
                      uVar8 = _objc_retain(*(undefined8 *)(local_d0 + 0x30));
                      puVar5[7] = uVar8;
                      puVar6 = local_d8;
                      _objc_retain(local_a0);
                      puVar6[8] = local_98;
                      _dispatch_async(local_78,local_d8);
                      _objc_release(local_70);
                      _objc_release(puVar6[8]);
                      _objc_release(puVar5[7]);
                      _objc_release(puVar4[6]);
                      _objc_release(puVar3[5]);
                      iVar1 = -0x5afecc31;
                    }
                    else {
                      iVar1 = iVar10;
                      if (iVar10 == 0x767797a) {
                        _objc_release(local_a0);
                        iVar1 = -0x361ecd95;
                      }
                    }
                  }
                }
                else if (iVar10 == 0xf9f815f) {
                  local_b0 = _objc_msgSend(local_b8,local_c0,&cf_https___imgapi_cn_cos_php);
                  _objc_retain(local_b0);
                  local_a8 = local_b0;
                  iVar1 = 0x370435ca;
                }
                else if (iVar10 == 0x28206d61) {
                  uVar8 = _objc_msgSend(local_c8,"initWithContentsOfURL:",local_a8);
                  _objc_release(local_b0);
                  uVar9 = _objc_alloc(&_OBJC_CLASS___UIImage);
                  _objc_msgSend(uVar9,"initWithData:",uVar8);
                  iVar1 = -0x1a666bbf;
                }
                else if (iVar10 == 0x312bb683) {
                  local_78 = PTR___dispatch_main_q_00068058;
                  local_70 = PTR___dispatch_main_q_00068058;
                  _objc_retain(PTR___dispatch_main_q_00068058);
                  iVar1 = -0xa3ba83d;
                }
              }
              else if (iVar10 < 0x74ca8e3a) {
                iVar1 = -0x99e80f9;
                if (iVar10 != 0x5d7168a7) {
                  iVar1 = iVar10;
                }
                iVar2 = -0x1a666bbf;
                if (iVar10 != 0x50d5655c) {
                  iVar2 = iVar1;
                }
                iVar1 = 0x50d5655c;
                if (iVar10 != 0x370435ca) {
                  iVar1 = iVar2;
                }
              }
              else if (iVar10 == 0x74ca8e3a) {
                _objc_alloc(&_OBJC_CLASS___NSData);
                iVar1 = -0x497f2602;
              }
              else if (iVar10 == 0x7833c679) {
                iVar1 = 0x767797a;
              }
              else if (iVar10 == 0x7d2fbb0c) {
                _objc_release(local_90);
                iVar1 = -0x760e4248;
              }
            }
            if (-0x44e2e284 < iVar10) break;
            if (iVar10 < -0x5afecc31) {
              if (iVar10 == -0x760e4248) {
                _objc_release(local_90);
                iVar1 = 0x7833c679;
              }
              else if (iVar10 == -0x760083ba) {
                *local_d8 = PTR___NSConcreteStackBlock_00068030;
                *(undefined4 *)(local_d8 + 1) = 0xc2000000;
                *(undefined4 *)((long)local_d8 + 0xc) = 0;
                local_d8[2] = FUN_00028008;
                iVar1 = -0x51d3a007;
              }
              else if (iVar10 == -0x74604e49) {
                _objc_msgSend(local_b8,local_c0,&cf_https___imgapi_cn_cos_php);
                _objc_retainAutoreleasedReturnValue();
                iVar1 = 0xf9f815f;
              }
            }
            else {
              iVar1 = -0x760e4248;
              if (iVar10 != -0x5afecc31) {
                if (iVar10 == -0x51d3a007) {
                  *local_d8 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_d8 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_d8 + 0xc) = 0;
                  local_d8[2] = FUN_00028008;
                  local_68 = local_d8 + 3;
                  iVar1 = 0x5d7168a7;
                }
                else {
                  iVar1 = iVar10;
                  if (iVar10 == -0x497f2602) {
                    puVar7 = puVar7 + -10;
                    local_d8 = puVar7;
                    local_d0 = param_1;
                    local_c8 = _objc_alloc(&_OBJC_CLASS___NSData);
                    local_b8 = &_OBJC_CLASS___NSURL;
                    local_c0 = "URLWithString:";
                    iVar1 = -0x17c3cfe5;
                  }
                }
              }
            }
          }
          if (iVar10 < -0x17c3cfe5) break;
          if (iVar10 == -0x17c3cfe5) {
            iVar1 = -0x143ccf9a;
          }
          else {
            iVar1 = 0xf9f815f;
            if ((iVar10 != -0x143ccf9a) && (iVar1 = iVar10, iVar10 == -0xdf7dd38)) {
              iVar1 = 0x312bb683;
              if (local_79 == '\0') {
                iVar1 = -0x5afecc31;
              }
            }
          }
        }
        iVar1 = -0x497f2602;
      } while (iVar10 == -0x44e2e283);
      if (iVar10 != -0x1a666bbf) break;
      local_a0 = _objc_msgSend(local_c8,"initWithContentsOfURL:",local_a8);
      local_98 = local_a0;
      _objc_release(local_b0);
      uVar8 = _objc_alloc(&_OBJC_CLASS___UIImage);
      local_90 = _objc_msgSend(uVar8,"initWithData:",local_98);
      local_79 = local_98 != 0;
      local_88 = local_90;
      iVar1 = -0xdf7dd38;
    }
    iVar1 = iVar10;
  } while (iVar10 != -0x361ecd95);
  return;
}



void FUN_00028008(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                 long param_5)

{
  int iVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  cfstringStruct *unaff_x21;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_270 [8];
  char *local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  char *local_220;
  cfstringStruct *local_218;
  char *local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  long local_1c8;
  char *local_1c0;
  char *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  long local_190;
  undefined8 local_188;
  undefined8 *local_180;
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  char *local_f0;
  char local_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  char local_81;
  cfstringStruct *local_80;
  
  puVar9 = (undefined8 *)auStack_270;
  local_1c0 = "writeToFile:atomically:";
  local_210 = "mbjbView";
  local_1b8 = "setAlpha:";
  local_1d8 = "setTintColor:";
  local_1d0 = "clearColor";
  local_1e8 = "setContentMode:";
  local_1e0 = "initWithFrame:";
  local_1f8 = "setImage:";
  local_1f0 = "imageWithRenderingMode:";
  local_208 = "bounds";
  local_200 = "view";
  local_228 = "defaultManager";
  local_220 = "animateWithDuration:animations:completion:";
  local_238 = "systemVersion";
  local_230 = "currentDevice";
  local_248 = "setFrame:";
  local_240 = "initWithEffect:";
  local_258 = "addSubview:";
  local_250 = "setAutoresizingMask:";
  local_268 = "setCenter:";
  local_260 = "effectWithStyle:";
  local_1c8 = param_5;
  iVar2 = 0x1fea3ef8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar12 = iVar2, iVar2 = iVar12, -0x16d81dd5 < iVar12) {
                if (iVar12 < 0x29798c11) {
                  if (iVar12 < 0x1399d5a5) {
                    if (iVar12 < 0x96fe46b) {
                      iVar2 = 0x96fe46b;
                      if ((iVar12 != -0x16d81dd4) && (iVar2 = iVar12, iVar12 == 0x6c1b62a)) {
                        _objc_msgSend(local_98,local_90);
                        uVar10 = _objc_retainAutoreleasedReturnValue();
                        fVar13 = (float)_objc_msgSend(uVar10,"floatValue");
                        local_81 = 15.0 <= fVar13;
                        _objc_release(uVar10);
                        _objc_release(local_98);
                        iVar2 = -0x7236784f;
                      }
                    }
                    else if (iVar12 == 0x96fe46b) {
                      _objc_msgSend(*local_180,local_210);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      _objc_msgSend(uVar10,"insertSubview:belowSubview:",local_118,
                                    *(undefined8 *)(local_190 + 0x30));
                      _objc_release(uVar10);
                      _objc_msgSend(0,local_120,local_1b8);
                      local_c8 = &_OBJC_CLASS___UIView;
                      *local_1b0 = PTR___NSConcreteStackBlock_00068030;
                      *(undefined4 *)(local_1b0 + 1) = 0xc2000000;
                      *(undefined4 *)((long)local_1b0 + 0xc) = 0;
                      local_1b0[2] = FUN_00029048;
                      local_1b0[3] = &DAT_00068360;
                      local_c0 = local_1b0 + 4;
                      iVar2 = 0x2ce7f426;
                    }
                    else if (iVar12 == 0xca82be9) {
                      uVar10 = _objc_msgSend(&_OBJC_CLASS___UIBlurEffect,local_260,5);
                      local_e0 = uVar10;
                      _objc_retain(uVar10);
                      local_d8 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
                      local_d0 = uVar10;
                      iVar2 = 0x1399d5a5;
                    }
                    else if (iVar12 == 0x1030e7b3) {
                      _objc_alloc(&_OBJC_CLASS___UIImageView);
                      lVar7 = local_1c8;
                      pcVar6 = local_200;
                      _objc_msgSend(*(undefined8 *)(local_1c8 + 0x20),local_200);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_208;
                      _objc_msgSend(uVar10,local_208);
                      _objc_msgSend(*(undefined8 *)(lVar7 + 0x20),pcVar6);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      _objc_msgSend(uVar10,pcVar5);
                      FUN_000277d4(0,0);
                      iVar2 = -0x7b58e8c1;
                    }
                  }
                  else if (iVar12 < 0x1fea3ef8) {
                    if (iVar12 == 0x1399d5a5) {
                      uVar10 = _objc_msgSend(local_d8,local_240,local_d0);
                      _objc_msgSend(local_120,local_168);
                      _objc_msgSend(uVar10,local_248);
                      _objc_msgSend(uVar10,local_250,0x12);
                      _objc_msgSend(_BlurEffectap,uVar10,local_1b8);
                      _objc_msgSend(local_120,local_258,uVar10);
                      _objc_release(uVar10);
                      _objc_release(local_e0);
                      iVar2 = -0x2540ac11;
                    }
                    else {
                      iVar2 = 0x6c1b62a;
                      if (iVar12 != 0x1a5366a8) {
                        iVar2 = iVar12;
                      }
                    }
                  }
                  else {
                    iVar2 = -0x62ddcfbc;
                    if (iVar12 != 0x27d82581) {
                      iVar2 = iVar12;
                    }
                    iVar1 = -0x30705a8a;
                    if (iVar12 != 0x23bfa052) {
                      iVar1 = iVar2;
                    }
                    iVar2 = -0x7b58e8c1;
                    if (iVar12 != 0x1fea3ef8) {
                      iVar2 = iVar1;
                    }
                  }
                }
                else if (iVar12 < 0x4c889623) {
                  if (iVar12 < 0x3301b836) {
                    if (iVar12 == 0x29798c11) {
                      _objc_msgSend(local_98,local_90);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      _objc_msgSend(uVar10,"floatValue");
                      _objc_release(uVar10);
                      _objc_release(local_98);
                      iVar2 = 0x6c1b62a;
                    }
                    else {
                      iVar2 = -0x2662b6e9;
                      if (iVar12 != 0x2ce7f426) {
                        iVar2 = iVar12;
                      }
                    }
                  }
                  else if (iVar12 == 0x3301b836) {
                    iVar2 = -0x5021d23d;
                  }
                  else if (iVar12 == 0x33e9a32e) {
                    param_3 = local_148;
                    param_4 = local_140;
                    local_120 = _objc_msgSend(local_128,local_130,local_188,local_1e0);
                    local_118 = local_120;
                    _objc_release(local_160);
                    _objc_release(local_170);
                    _objc_msgSend(local_120,local_1e8,2);
                    _objc_msgSend(*(undefined8 *)(local_190 + 0x28),local_1f0,1);
                    uVar10 = _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(local_120,local_1f8,uVar10);
                    _objc_release(uVar10);
                    local_110 = _objc_msgSend(*local_180,local_178);
                    _objc_retain(local_110);
                    _objc_msgSend(local_110,local_168);
                    dVar15 = param_3 * 0.5;
                    local_108 = _objc_msgSend(*local_180,local_178);
                    _objc_retain(local_108);
                    _objc_msgSend(local_108,local_168);
                    dVar14 = param_4 / 3.0;
                    local_100 = FUN_000278dc(dVar15);
                    local_f0 = local_268;
                    local_f8 = dVar14;
                    iVar2 = 0x3301b836;
                  }
                  else {
                    iVar2 = -0x16d81dd4;
                    if (iVar12 != 0x35ba44fe) {
                      iVar2 = iVar12;
                    }
                  }
                }
                else if (iVar12 < 0x53571e9e) {
                  if (iVar12 == 0x4c889623) {
                    local_80 = unaff_x21;
                    iVar2 = -0x1ae002a1;
                  }
                  else {
                    pcVar3 = &cf__var_jb_var_mobile_Library_Preferences_xc_lzsxcl_w2Proimage_plist;
                    if (iVar12 != 0x4ff005cc) {
                      pcVar3 = unaff_x21;
                    }
                    unaff_x21 = pcVar3;
                    iVar2 = 0x4c889623;
                    if (iVar12 != 0x4ff005cc) {
                      iVar2 = iVar12;
                    }
                  }
                }
                else {
                  iVar2 = -0x45a55fd1;
                  if (((iVar12 != 0x53571e9e) && (iVar2 = -0x30705a8a, iVar12 != 0x5d6b1c33)) &&
                     (iVar2 = iVar12, iVar12 == 0x79def820)) {
                    _objc_msgSend(local_100,local_f8,local_120,local_f0);
                    _objc_release(local_108);
                    _objc_release(local_110);
                    _objc_msgSend(&_OBJC_CLASS___UIColor,local_1d0);
                    uVar10 = _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(local_120,local_1d8,uVar10);
                    _objc_release(uVar10);
                    iVar2 = -0x6845ab53;
                  }
                }
              }
              if (iVar12 < -0x5021d23d) break;
              if (iVar12 < -0x2662b6e9) {
                if (iVar12 < -0x39309b96) {
                  iVar1 = 0x35ba44fe;
                  if (iVar12 != -0x45a55fd1) {
                    iVar1 = iVar12;
                  }
                  iVar2 = -0x6845ab53;
                  if (iVar12 != -0x5021d23d) {
                    iVar2 = iVar1;
                  }
                }
                else if (iVar12 == -0x39309b96) {
                  iVar2 = 0xca82be9;
                  if (local_e1 == '\0') {
                    iVar2 = -0x16d81dd4;
                  }
                }
                else if (iVar12 == -0x36c52747) {
                  param_3 = local_148;
                  param_4 = local_140;
                  uVar10 = _objc_msgSend(local_128,local_130,local_188,local_1e0);
                  _objc_release(local_160);
                  _objc_release(local_170);
                  _objc_msgSend(uVar10,local_1e8,2);
                  _objc_msgSend(*(undefined8 *)(local_190 + 0x28),local_1f0,1);
                  uVar11 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar10,local_1f8,uVar11);
                  _objc_release(uVar11);
                  _objc_msgSend(*local_180,local_178);
                  uVar10 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar10,local_168);
                  dVar14 = param_3 * 0.5;
                  _objc_msgSend(*local_180,local_178);
                  uVar10 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar10,local_168);
                  FUN_000278dc(dVar14,param_4 / 3.0);
                  iVar2 = 0x33e9a32e;
                }
                else {
                  iVar2 = -0x6477c522;
                  if (iVar12 != -0x30705a8a) {
                    iVar2 = iVar12;
                  }
                }
              }
              else if (iVar12 < -0x1bb71e3c) {
                if (iVar12 == -0x2662b6e9) {
                  _objc_retain(local_120);
                  puVar4 = PTR___NSConcreteStackBlock_00068030;
                  *local_c0 = local_118;
                  puVar8 = local_1b0;
                  local_218 = unaff_x21;
                  *local_1a8 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_1a8 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_1a8 + 0xc) = 0;
                  local_1a8[2] = FUN_0002942c;
                  local_1a8[3] = &DAT_00068390;
                  local_b8 = local_1a8 + 4;
                  _objc_retain(local_120);
                  *local_b8 = local_118;
                  pcVar5 = local_220;
                  _objc_msgSend(0x3fdccccccccccccd,local_c8,local_220,puVar8,local_1a8);
                  *local_1a0 = puVar4;
                  *(undefined4 *)(local_1a0 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_1a0 + 0xc) = 0;
                  local_1a0[2] = FUN_00029558;
                  local_1a0[3] = &DAT_00068360;
                  lVar7 = local_190;
                  local_b0 = local_1a0 + 4;
                  uVar10 = _objc_retain(*(undefined8 *)(local_190 + 0x38));
                  *local_b0 = uVar10;
                  puVar8 = local_1a0;
                  *local_198 = puVar4;
                  unaff_x21 = local_218;
                  *(undefined4 *)(local_198 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_198 + 0xc) = 0;
                  local_198[2] = FUN_000296e8;
                  local_198[3] = &DAT_00068390;
                  local_a8 = local_198 + 4;
                  uVar10 = _objc_retain(*(undefined8 *)(lVar7 + 0x38));
                  *local_a8 = uVar10;
                  _objc_msgSend(0x3fe3333333333333,&_OBJC_CLASS___UIView,pcVar5,puVar8,local_198);
                  local_a0 = _objc_msgSend(&_OBJC_CLASS___NSFileManager,local_228);
                  _objc_retain(local_a0);
                  local_98 = _objc_msgSend(&_OBJC_CLASS___UIDevice,local_230);
                  _objc_retain(local_98);
                  local_90 = local_238;
                  iVar2 = 0x1a5366a8;
                }
                else {
                  iVar2 = -0x45a55fd1;
                  if (iVar12 != -0x2540ac11) {
                    iVar2 = iVar12;
                  }
                }
              }
              else if (iVar12 == -0x1bb71e3c) {
                _objc_msgSend(local_a0,"createFileAtPath:contents:attributes:",local_80,0,0);
                uVar10 = *(undefined8 *)(local_190 + 0x40);
                puVar9[-2] = &cf_wallpaperImage;
                puVar9[-1] = 0;
                _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar10);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar10,local_1c0,local_80,1);
                _objc_release(uVar10);
                _objc_release(local_80);
                _objc_release(local_a0);
                _objc_release(*local_a8);
                _objc_release(*local_b0);
                _objc_release(*local_b8);
                _objc_release(*local_c0);
                _objc_release(local_120);
                iVar2 = -0x1ae002a1;
              }
              else if (iVar12 == -0x1ae002a1) {
                _objc_msgSend(local_a0,"createFileAtPath:contents:attributes:",local_80,0,0);
                uVar10 = *(undefined8 *)(local_190 + 0x40);
                puVar9[-2] = &cf_wallpaperImage;
                puVar9[-1] = 0;
                _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar10);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar10,local_1c0,local_80,1);
                _objc_release(uVar10);
                _objc_release(local_80);
                _objc_release(local_a0);
                _objc_release(*local_a8);
                _objc_release(*local_b0);
                _objc_release(*local_b8);
                _objc_release(*local_c0);
                _objc_release(local_120);
                iVar2 = -0x6774ac4e;
              }
              else {
                iVar2 = 0x33e9a32e;
                if (iVar12 != -0x1ace1bbd) {
                  iVar2 = iVar12;
                }
              }
            }
            if (-0x6774ac4f < iVar12) break;
            if (iVar12 < -0x7236784f) {
              if (iVar12 == -0x7b58e8c1) {
                local_1b0 = puVar9 + -6;
                local_1a8 = puVar9 + -0xc;
                local_1a0 = puVar9 + -0x12;
                puVar9 = puVar9 + -0x18;
                local_190 = local_1c8;
                local_198 = puVar9;
                local_188 = _objc_alloc(&_OBJC_CLASS___UIImageView);
                local_180 = (undefined8 *)(local_190 + 0x20);
                local_178 = local_200;
                local_170 = _objc_msgSend(*local_180,local_200);
                _objc_retain(local_170);
                local_168 = local_208;
                _objc_msgSend(local_170,local_208);
                local_160 = _objc_msgSend(*local_180,local_178);
                _objc_retain(local_160);
                _objc_msgSend(local_160,local_168);
                uVar10 = 0;
                local_158 = FUN_000277d4(0);
                local_150 = uVar10;
                local_148 = param_3;
                local_140 = param_4;
                local_138 = local_158;
                local_130 = uVar10;
                local_128 = local_158;
                iVar2 = -0x770792ac;
              }
              else {
                iVar2 = -0x1ace1bbd;
                if (iVar12 != -0x770792ac) {
                  iVar2 = iVar12;
                }
              }
            }
            else if (iVar12 == -0x7236784f) {
              iVar2 = 0x5d6b1c33;
              if (local_81 == '\0') {
                iVar2 = 0x4c889623;
              }
              unaff_x21 = &cf__var_mobile_Library_Preferences_xc_lzsxcl_w2Proimage_plist;
            }
            else if (iVar12 == -0x6c982479) {
              _objc_msgSend(*local_180,local_210);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar10,"insertSubview:belowSubview:",local_118,
                            *(undefined8 *)(local_190 + 0x30));
              _objc_release(uVar10);
              _objc_msgSend(0,local_120,local_1b8);
              *local_1b0 = PTR___NSConcreteStackBlock_00068030;
              *(undefined4 *)(local_1b0 + 1) = 0xc2000000;
              *(undefined4 *)((long)local_1b0 + 0xc) = 0;
              local_1b0[2] = FUN_00029048;
              local_1b0[3] = &DAT_00068360;
              iVar2 = 0x96fe46b;
            }
            else if (iVar12 == -0x6845ab53) {
              _objc_msgSend(local_100,local_f8,local_120,local_f0);
              _objc_release(local_108);
              _objc_release(local_110);
              _objc_msgSend(&_OBJC_CLASS___UIColor,local_1d0);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_120,local_1d8,uVar10);
              _objc_release(uVar10);
              local_e1 = _BlurEffect != '\0';
              iVar2 = -0x39309b96;
            }
          }
          if (iVar12 < -0x59a41551) break;
          iVar1 = 0x4ff005cc;
          if (iVar12 != -0x515089d1) {
            iVar1 = iVar12;
          }
          iVar2 = -0x62ddcfbc;
          if (iVar12 != -0x59a41551) {
            iVar2 = iVar1;
          }
        }
        if (iVar12 != -0x6477c522) break;
        iVar2 = 0x27d82581;
      }
      if (iVar12 != -0x62ddcfbc) break;
      iVar2 = -0x515089d1;
    }
  } while (iVar12 != -0x6774ac4e);
  return;
}



void FUN_00029048(long param_1)

{
  int iVar1;
  char *local_60;
  undefined8 local_58;
  
  iVar1 = 0x195003c;
  while( true ) {
    while (iVar1 < 0x22b97687) {
      if (iVar1 == -0xb64995d) {
        iVar1 = 0x58546f43;
      }
      else if (iVar1 == 0x195003c) {
        local_58 = *(undefined8 *)(param_1 + 0x20);
        iVar1 = -0xb64995d;
        local_60 = "setAlpha:";
      }
    }
    if (iVar1 == 0x22b97687) break;
    if (iVar1 == 0x58546f43) {
      _objc_msgSend(0x3ff0000000000000,local_58,local_60);
      iVar1 = 0x22b97687;
    }
  }
  return;
}



void FUN_00029124(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  
  iVar1 = 0x46e58170;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar4 = iVar1, 0x4432aee4 < iVar4) {
            iVar1 = 0x2d6ec1ea;
            if (iVar4 != 0x7e4c3271) {
              iVar1 = iVar4;
            }
            iVar2 = 0x4d30237;
            if (iVar4 != 0x7cb83405) {
              iVar2 = iVar1;
            }
            iVar1 = 0x7e4c3271;
            if (iVar4 != 0x551b4f9e) {
              iVar1 = iVar2;
            }
            iVar2 = 0x4d30237;
            if (iVar4 != 0x46e58170) {
              iVar2 = iVar4;
            }
            iVar3 = 0x588d57c;
            if (iVar4 != 0x4432aee5) {
              iVar3 = iVar2;
            }
            if (iVar4 < 0x551b4f9e) {
              iVar1 = iVar3;
            }
          }
          if (0x588d57b < iVar4) break;
          if (iVar4 == -0x685588db) {
            iVar1 = -0x619bb1be;
          }
          else if (iVar4 == -0x619bb1be) {
            local_28 = local_30;
            iVar1 = 0x551b4f9e;
          }
          else {
            iVar1 = iVar4;
            if (iVar4 == 0x4d30237) {
              local_30 = *(undefined8 *)(param_2 + 0x20);
              iVar1 = 0x4432aee5;
            }
          }
        }
        iVar1 = -0x619bb1be;
      } while (iVar4 == 0x588d57c);
      if (iVar4 != 0x2d6ec1ea) break;
      _objc_retain(local_28);
      iVar1 = 0x14114e28;
    }
    iVar1 = iVar4;
  } while (iVar4 != 0x14114e28);
  return;
}



void FUN_000292ac(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -0x46f805ad;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar3 = iVar1, iVar3 < -0x20815db3) {
            if (iVar3 < -0x46f805ad) {
              if (iVar3 == -0x79dfa840) {
                iVar1 = 0x76fda1fe;
              }
              else {
                iVar1 = iVar3;
                if (iVar3 == -0x6b4e6dfe) {
                  _objc_release(*(undefined8 *)(param_1 + 0x20));
                  iVar1 = -0x42fcfa68;
                }
              }
            }
            else {
              iVar1 = -0x6859952;
              if (iVar3 != -0x46f805ad) {
                if (iVar3 == -0x42fcfa68) {
                  _objc_release(*(undefined8 *)(param_1 + 0x20));
                  iVar1 = -0x79dfa840;
                }
                else {
                  iVar1 = 0x2224e537;
                  if (iVar3 != -0x34351c07) {
                    iVar1 = iVar3;
                  }
                }
              }
            }
          }
          if (0x2224e536 < iVar3) break;
          iVar1 = -0x20815db3;
          if (iVar3 != -0x6859952) {
            iVar1 = iVar3;
          }
          iVar2 = -0x42fcfa68;
          if (iVar3 != -0x7b01cb4) {
            iVar2 = iVar1;
          }
          iVar1 = -0x7b01cb4;
          if (iVar3 != -0x20815db3) {
            iVar1 = iVar2;
          }
        }
        iVar1 = -0x6859952;
      } while (iVar3 == 0x57a0b782);
      if (iVar3 != 0x76fda1fe) break;
      iVar1 = -0x34351c07;
    }
    iVar1 = iVar3;
  } while (iVar3 != 0x2224e537);
  return;
}



void FUN_0002942c(long param_1)

{
  int iVar1;
  long local_78;
  
  iVar1 = -0x75399890;
  while( true ) {
    while (0x25167361 < iVar1) {
      if (iVar1 == 0x25167362) {
        iVar1 = -0x504567f9;
      }
      else if (iVar1 == 0x3481705b) {
        _objc_msgSend(0x3fefae147ae147ae,*(undefined8 *)(local_78 + 0x20),"setAlpha:");
        iVar1 = -0x77229e87;
      }
      else if (iVar1 == 0x3ddcae54) {
        iVar1 = 0x25167362;
        local_78 = param_1;
      }
    }
    if (iVar1 == -0x77229e87) break;
    if (iVar1 == -0x75399890) {
      iVar1 = 0x3ddcae54;
    }
    else if (iVar1 == -0x504567f9) {
      iVar1 = 0x3481705b;
    }
  }
  return;
}



void FUN_00029558(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long local_38;
  char *local_30;
  undefined8 local_28;
  
  iVar2 = -0x67963dfc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, 0x39aece17 < iVar3) {
            if (iVar3 < 0x3e219ada) {
              iVar1 = 0x4a9e30b9;
              if (iVar3 != 0x3bbbab60) {
                iVar1 = iVar3;
              }
              iVar2 = -0x4889c451;
              if (iVar3 != 0x39aece18) {
                iVar2 = iVar1;
              }
            }
            else {
              iVar2 = 0x320871eb;
              if (iVar3 != 0x3e219ada) {
                if (iVar3 == 0x4a9e30b9) {
                  _objc_msgSend(0,local_28,local_30);
                  iVar2 = -0x2ca04fd4;
                }
                else {
                  iVar2 = 0x3bbbab60;
                  if (iVar3 != 0x60211477) {
                    iVar2 = iVar3;
                  }
                }
              }
            }
          }
          if (-0x2ca04fd5 < iVar3) break;
          iVar2 = 0x320871eb;
          if ((iVar3 != -0x67963dfc) && (iVar2 = iVar3, iVar3 == -0x4889c451)) {
            local_28 = *(undefined8 *)(local_38 + 0x20);
            local_30 = "setAlpha:";
            iVar2 = 0x60211477;
          }
        }
        if (iVar3 != -0xe41d74c) break;
        iVar2 = 0x39aece18;
      }
      if (iVar3 != 0x320871eb) break;
      local_38 = param_1;
      iVar2 = -0xe41d74c;
    }
    iVar2 = iVar3;
  } while (iVar3 != -0x2ca04fd4);
  return;
}



void FUN_000296e8(long param_1)

{
  int iVar1;
  
  iVar1 = 0x5a949592;
  while( true ) {
    while (0x4bbc8c15 < iVar1) {
      if (iVar1 == 0x4bbc8c16) {
        iVar1 = -0x44f5bee9;
      }
      else if (iVar1 == 0x5a949592) {
        _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"removeFromSuperview");
        iVar1 = 0x1f7046a9;
      }
    }
    if (iVar1 == -0x44f5bee9) break;
    if (iVar1 == 0x1f7046a9) {
      iVar1 = 0x4bbc8c16;
    }
  }
  return;
}



void FUN_000297b0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  iVar1 = -0x689a85e6;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < 0xb582dc0) {
          if (iVar3 < -0x37612eed) {
            iVar1 = -0x766a4d35;
            if (iVar3 != -0x3acec717) {
              iVar1 = iVar3;
            }
            iVar2 = -0x4d12787;
            if (iVar3 != -0x689a85e6) {
              iVar2 = iVar1;
            }
            iVar1 = -0x37612eed;
            if (iVar3 != -0x766a4d35) {
              iVar1 = iVar2;
            }
          }
          else if (iVar3 == -0x37612eed) {
            local_38 = (undefined8 *)(local_40 + 0x40);
            iVar1 = 0x30b0e4f4;
          }
          else if (iVar3 == -0x9f17825) {
            _objc_retain(*local_38);
            iVar1 = 0x59dd2091;
          }
          else {
            iVar1 = iVar3;
            if (iVar3 == -0x4d12787) {
              _objc_retain(*(undefined8 *)(param_2 + 0x20));
              _objc_retain(*(undefined8 *)(param_2 + 0x28));
              _objc_retain(*(undefined8 *)(param_2 + 0x30));
              _objc_retain(*(undefined8 *)(param_2 + 0x38));
              iVar1 = -0x3acec717;
              local_40 = param_2;
            }
          }
        }
        if (0x35e27b36 < iVar3) break;
        iVar1 = 0x71fe9061;
        if (iVar3 != 0x30b0e4f4) {
          iVar1 = iVar3;
        }
        iVar2 = -0x4d12787;
        if (iVar3 != 0xe40df9a) {
          iVar2 = iVar1;
        }
        iVar1 = -0x9f17825;
        if (iVar3 != 0xb582dc0) {
          iVar1 = iVar2;
        }
      }
      if (iVar3 != 0x35e27b37) break;
      iVar1 = -0x37612eed;
    }
    iVar1 = -0x9f17825;
  } while ((iVar3 == 0x71fe9061) || (iVar1 = iVar3, iVar3 != 0x59dd2091));
  return;
}



void FUN_0002999c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  iVar2 = -0x3775b80;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar3 < 0x1394f615) {
            if (iVar3 < -0x60deea3e) {
              if (iVar3 == -0x75ae9cf6) {
                _objc_release(*(undefined8 *)(local_60 + 0x40));
                _objc_release(*local_40);
                _objc_release(*local_48);
                _objc_release(*local_50);
                local_38 = *local_58;
                iVar2 = -0x66474fc0;
              }
              else {
                iVar1 = 0x1394f615;
                if (iVar3 != -0x66474fc0) {
                  iVar1 = iVar3;
                }
                iVar2 = -0x75ae9cf6;
                if (iVar3 != -0x686a7ae7) {
                  iVar2 = iVar1;
                }
              }
            }
            else if (iVar3 == -0x60deea3e) {
              _objc_release(local_38);
              iVar2 = 0x49579ba3;
            }
            else if (iVar3 == -0x15fb9826) {
              local_58 = (undefined8 *)(param_1 + 0x20);
              local_50 = (undefined8 *)(param_1 + 0x28);
              local_48 = (undefined8 *)(param_1 + 0x30);
              local_40 = (undefined8 *)(param_1 + 0x38);
              local_60 = param_1;
              iVar2 = 0x2c4d86af;
            }
            else {
              iVar2 = -0x15fb9826;
              if (iVar3 != -0x3775b80) {
                iVar2 = iVar3;
              }
            }
          }
          if (0x2c4d86ae < iVar3) break;
          iVar2 = -0x60deea3e;
          if (((iVar3 != 0x1394f615) && (iVar2 = -0x15fb9826, iVar3 != 0x1901d162)) &&
             (iVar2 = iVar3, iVar3 == 0x1dff9fd6)) {
            _objc_release(local_38);
            iVar2 = -0x60deea3e;
          }
        }
        if (iVar3 != 0x2c4d86af) break;
        iVar2 = -0x686a7ae7;
      }
      if (iVar3 != 0x571fb7e9) break;
      _objc_release(*(undefined8 *)(local_60 + 0x40));
      _objc_release(*local_40);
      _objc_release(*local_48);
      _objc_release(*local_50);
      iVar2 = -0x75ae9cf6;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x49579ba3);
  return;
}



void FUN_00029bf0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 local_48;
  
  iVar1 = 0x59c7016c;
  do {
    while( true ) {
      while (0x59c7016b < iVar1) {
        if (iVar1 == 0x59c7016c) {
          iVar1 = -0x2498412a;
        }
        else if (iVar1 == 0x73711b99) {
          iVar1 = 0x255fe165;
        }
      }
      if (iVar1 != -0x2498412a) break;
      _objc_retain(*(undefined8 *)(param_2 + 0x20));
      iVar1 = 0x73711b99;
      local_48 = param_2;
    }
  } while (iVar1 != 0x255fe165);
  _objc_retain(*(undefined8 *)(local_48 + 0x28));
  _objc_retain(*(undefined8 *)(local_48 + 0x30));
  return;
}



void FUN_00029cc8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  iVar2 = 0x282569c0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, 0x21f74476 < iVar3) {
            if (iVar3 < 0x2f21577c) {
              if (iVar3 == 0x21f74477) {
                _objc_release(local_38);
                iVar2 = -0x4e73903b;
              }
              else {
                iVar1 = 0x21f74477;
                if (iVar3 != 0x2862a45d) {
                  iVar1 = iVar3;
                }
                iVar2 = 0x2f21577c;
                if (iVar3 != 0x282569c0) {
                  iVar2 = iVar1;
                }
              }
            }
            else if (iVar3 == 0x2f21577c) {
              _objc_release(*(undefined8 *)(param_1 + 0x30));
              local_40 = *(undefined8 *)(param_1 + 0x28);
              local_48 = (undefined8 *)(param_1 + 0x20);
              iVar2 = 0x30063916;
            }
            else if (iVar3 == 0x30063916) {
              iVar2 = -0x3c39c8ed;
            }
            else if (iVar3 == 0x30e598ff) {
              _objc_release(local_40);
              local_38 = *local_48;
              iVar2 = -0x46ae72e8;
            }
          }
          if (iVar3 < -0x3c39c8ed) break;
          iVar2 = 0x30e598ff;
          if (iVar3 != -0x3c39c8ed) {
            if (iVar3 == -0x276f059f) {
              _objc_release(*(undefined8 *)(param_1 + 0x30));
              iVar2 = 0x2f21577c;
            }
            else {
              iVar2 = iVar3;
              if (iVar3 == -0xc6ed727) {
                _objc_release(local_38);
                iVar2 = 0x21f74477;
              }
            }
          }
        }
        if (iVar3 != -0x46ae72e8) break;
        iVar2 = 0x2862a45d;
      }
      if (iVar3 != -0x4188c754) break;
      _objc_release(local_40);
      iVar2 = 0x30e598ff;
    }
  } while (iVar3 != -0x4e73903b);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::xzok(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *local_38;
  
  iVar3 = 0x6d9ae408;
  do {
    while( true ) {
      while (iVar1 = iVar3, iVar1 < 0x5f08de5c) {
        if (iVar1 < 0x2ce194a5) {
          iVar3 = 0x40a7672e;
          if (iVar1 != -0x104aad5d) {
            if (iVar1 == 0x134edaa2) {
              iVar3 = -0x7c01ff42;
            }
            else {
              iVar3 = iVar1;
              if (iVar1 == -0x7c01ff42) {
                return;
              }
            }
          }
        }
        else {
          iVar3 = 0x75d4277a;
          if (iVar1 != 0x2ce194a5) {
            if (iVar1 == 0x393a388e) {
              _objc_msgSend(param_1,local_38,1,0);
              xzok2(param_1,(SEL)"xzok2");
              iVar3 = 0x75d4277a;
            }
            else {
              iVar3 = iVar1;
              if (iVar1 == 0x40a7672e) {
                local_38 = "dismissViewControllerAnimated:completion:";
                iVar3 = 0x6dd4f3d4;
              }
            }
          }
        }
      }
      if (0x6d9ae407 < iVar1) break;
      iVar2 = 0x5f08de5c;
      iVar3 = 0x134edaa2;
      iVar4 = 0x5f08de5c;
      if (iVar1 != 0x6523a1ab) {
        iVar4 = iVar1;
      }
LAB_0002a010:
      if (iVar1 != iVar2) {
        iVar3 = iVar4;
      }
    }
    if (iVar1 != 0x75d4277a) {
      iVar2 = 0x6dd4f3d4;
      iVar3 = 0x2ce194a5;
      iVar4 = iVar1;
      if (iVar1 == 0x6d9ae408) {
        iVar4 = 0x40a7672e;
      }
      goto LAB_0002a010;
    }
    _objc_msgSend(param_1,local_38,1,0);
    xzok2(param_1,(SEL)"xzok2");
    iVar3 = 0x6523a1ab;
  } while( true );
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::xzok2(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0x64d956d4;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar4 = iVar1, iVar4 < 0x6fa5786) {
            iVar1 = 0x393db765;
            if (iVar4 != 0x5296640) {
              iVar1 = iVar4;
            }
            iVar3 = 0x3e1a85fd;
            if (iVar4 != -0xa23512f) {
              iVar3 = iVar1;
            }
            iVar1 = -0x5917f3a8;
            if (iVar4 != -0x2ad9d22e) {
              iVar1 = iVar3;
            }
            iVar3 = -0x6adf23dc;
            if (iVar4 != -0x5917f3a8) {
              iVar3 = iVar4;
            }
            iVar2 = 0x5296640;
            if (iVar4 != -0x6adf23dc) {
              iVar2 = iVar3;
            }
            iVar3 = -0x2ad9d22e;
            if (iVar4 != -0x79a7325e) {
              iVar3 = iVar2;
            }
            if (iVar4 < -0x2ad9d22e) {
              iVar1 = iVar3;
            }
          }
          if (iVar4 < 0x3e1a85fd) break;
          iVar1 = iVar4;
          if (iVar4 == 0x64d956d4) {
            iVar1 = -0x2ad9d22e;
          }
          iVar3 = 0x5296640;
          if (iVar4 != 0x57767dae) {
            iVar3 = iVar1;
          }
          iVar1 = 0x6fa5786;
          if (iVar4 != 0x3e1a85fd) {
            iVar1 = iVar3;
          }
        }
        iVar1 = 0x3e1a85fd;
      } while (iVar4 == 0xf8f0fd1);
      if (iVar4 != 0x393db765) break;
      iVar1 = -0xa23512f;
    }
    iVar1 = iVar4;
  } while (iVar4 != 0x6fa5786);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthor(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *local_10;
  ID local_8;
  
  iVar2 = -0x1658f4cd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = 0x11e0e19, 0x31fd3381 < iVar3) {
            if (iVar3 < 0x5e7cc5f6) {
              iVar1 = 0x5e7cc5f6;
              if (iVar3 != 0x5c12adfc) {
                iVar1 = iVar3;
              }
              iVar2 = 0x5e7cc5f6;
              if (iVar3 != 0x31fd3382) {
                iVar2 = iVar1;
              }
            }
            else if (iVar3 == 0x5e7cc5f6) {
              iVar2 = -0x19c330ab;
              local_10 = "dismissViewControllerAnimated:completion:";
              local_8 = param_1;
            }
            else if (iVar3 != 0x7d5d4d21) {
              iVar2 = iVar3;
            }
          }
          if (iVar3 < -0x1658f4cd) break;
          iVar1 = -0x34b33087;
          if (iVar3 != 0x11e0e19) {
            iVar1 = iVar3;
          }
          if (iVar3 != -0x1658f4cd) {
            iVar2 = iVar1;
          }
        }
        if (iVar3 != -0x34b33087) break;
        iVar2 = 0x31fd3382;
      }
      if (iVar3 != -0x19c330ab) break;
      iVar2 = -0x34dfbcec;
    }
    iVar2 = iVar3;
  } while (iVar3 != -0x34dfbcec);
  _objc_msgSend(local_8,local_10,1,0);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthorclean(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = 0x7551b443;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x252b25cd < iVar5) {
            iVar1 = iVar5;
            if (iVar5 == 0x7551b443) {
              iVar1 = -0x55b2641e;
            }
            iVar2 = -0x55b2641e;
            if (iVar5 != 0x7a445de7) {
              iVar2 = iVar1;
            }
            iVar1 = 0xfb73d77;
            if (iVar5 != 0x6a2e0fb9) {
              iVar1 = iVar2;
            }
            iVar2 = -0x39bfc380;
            if (iVar5 != 0x5a106f95) {
              iVar2 = iVar5;
            }
            iVar3 = 0x5a106f95;
            if (iVar5 != 0x252b25ce) {
              iVar3 = iVar2;
            }
            bVar4 = iVar5 < 0x6a2e0fb9;
            iVar5 = iVar1;
            if (bVar4) {
              iVar5 = iVar3;
            }
          }
          if (iVar5 < 0x83d8db8) break;
          iVar1 = 0x72351ea;
          if (iVar5 != 0xfb73d77) {
            iVar1 = iVar5;
          }
          iVar2 = 0x83d8db8;
          if (iVar5 != 0xa09f6e8) {
            iVar2 = iVar1;
          }
          bVar4 = iVar5 != 0x83d8db8;
          iVar5 = 0x5a106f95;
          if (bVar4) {
            iVar5 = iVar2;
          }
        }
        if (iVar5 != -0x55b2641e) break;
        iVar5 = 0xa09f6e8;
      }
      if (iVar5 != -0x39bfc380) break;
      iVar5 = 0x6a2e0fb9;
    }
  } while (iVar5 != 0x72351ea);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthor2(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = -0xa30f94d;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 < 0x15c82979) {
          iVar2 = -0x521e752d;
          if (iVar5 != -0xa30f94d) {
            iVar2 = iVar5;
          }
          iVar1 = 0x6d188574;
          if (iVar5 != -0x521e752d) {
            iVar1 = iVar2;
          }
          iVar2 = 0x15c82979;
          if (iVar5 != -0x54bce485) {
            iVar2 = iVar5;
          }
          iVar3 = 0x273c4ce1;
          if (iVar5 != -0x56eee784) {
            iVar3 = iVar2;
          }
          bVar4 = iVar5 < -0x521e752d;
          iVar5 = iVar1;
          if (bVar4) {
            iVar5 = iVar3;
          }
        }
        if (0x273c4ce0 < iVar5) break;
        iVar2 = -0x521e752d;
        if (iVar5 != 0x237d7713) {
          iVar2 = iVar5;
        }
        bVar4 = iVar5 != 0x15c82979;
        iVar5 = -0x56eee784;
        if (bVar4) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != 0x6d188574) break;
      iVar5 = -0x54bce485;
    }
  } while (iVar5 != 0x273c4ce1);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthor3(ID param_1,SEL param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ID local_68;
  
  iVar3 = 0x1b0d5ae4;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 < -0x3171195d) {
          if (iVar3 < -0x67be552f) {
            if (iVar3 == -0x7f8fc0cb) {
              _objc_msgSend(local_68,"AboutAuthor2");
              iVar3 = -0x3171195d;
            }
            else if (iVar3 == -0x72ca4c37) {
              _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
              iVar3 = -0x5c0d43d7;
            }
          }
          else if (iVar3 == -0x67be552f) {
            iVar3 = -0x211f845a;
          }
          else if (iVar3 == -0x5c0d43d7) {
            _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
            local_68 = param_1;
            iVar3 = 0x781045c2;
          }
        }
        if (iVar3 < 0x1b0d5ae4) break;
        iVar1 = iVar3;
        if (iVar3 == 0x1b0d5ae4) {
          iVar1 = -0x5c0d43d7;
        }
        bVar2 = iVar3 != 0x781045c2;
        iVar3 = -0x7f8fc0cb;
        if (bVar2) {
          iVar3 = iVar1;
        }
      }
      if (iVar3 != -0x3171195d) break;
      iVar3 = -0x67be552f;
    }
  } while (iVar3 != -0x211f845a);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthorxz(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = 0x20624c00;
  do {
    while( true ) {
      while (iVar1 < 0x2db76d05) {
        if (iVar1 == -0x2dd8b82) {
          iVar1 = 0x2db76d05;
        }
        else if (iVar1 == 0x20624c00) {
          iVar1 = -0x2dd8b82;
        }
      }
      if (iVar1 != 0x2db76d05) break;
      iVar1 = 0x3d3fd8b5;
    }
  } while (iVar1 != 0x3d3fd8b5);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthorxzenglish(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = -0x6b25eb00;
  while( true ) {
    while (iVar1 < 0x3f81419e) {
      if (iVar1 == -0x6b25eb00) {
        iVar1 = 0x3f81419e;
      }
      else if (iVar1 == 0x169752d9) {
        iVar1 = 0x7f68a779;
      }
    }
    if (iVar1 == 0x7f68a779) break;
    if (iVar1 == 0x3f81419e) {
      iVar1 = 0x169752d9;
    }
  }
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::openw2(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = 0x65ed046;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 < -0x2a0abef8) {
          iVar2 = -0x67063a1;
          if (iVar5 != -0x5509aec7) {
            iVar2 = iVar5;
          }
          iVar1 = -0x75f92699;
          if (iVar5 != -0x5a698292) {
            iVar1 = iVar2;
          }
          iVar2 = -0x5509aec7;
          if (iVar5 != -0x72e0dff1) {
            iVar2 = iVar5;
          }
          iVar3 = -0x2a0abef8;
          if (iVar5 != -0x75f92699) {
            iVar3 = iVar2;
          }
          bVar4 = iVar5 < -0x5a698292;
          iVar5 = iVar1;
          if (bVar4) {
            iVar5 = iVar3;
          }
        }
        if (iVar5 < 0x65ed046) break;
        iVar2 = iVar5;
        if (iVar5 == 0x65ed046) {
          iVar2 = -0x72e0dff1;
        }
        bVar4 = iVar5 != 0x2c154108;
        iVar5 = -0x72e0dff1;
        if (bVar4) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != -0x67063a1) break;
      iVar5 = -0x5a698292;
    }
  } while (iVar5 != -0x2a0abef8);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthorgb(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0x72d6eaa5;
  do {
    while( true ) {
      while (iVar4 = iVar1, iVar4 < -0x1a054d91) {
        iVar1 = -0x5e64c7dd;
        if (iVar4 != -0x51653a34) {
          iVar1 = iVar4;
        }
        iVar3 = 0x1968863e;
        if (iVar4 != -0x5192b5f5) {
          iVar3 = iVar1;
        }
        iVar1 = 0x3ff4c84d;
        if (iVar4 != -0x53b0dc74) {
          iVar1 = iVar3;
        }
        iVar3 = -0x5192b5f5;
        if (iVar4 != -0x5e64c7dd) {
          iVar3 = iVar4;
        }
        iVar2 = -0x51653a34;
        if (iVar4 != -0x6e32c8b7) {
          iVar2 = iVar3;
        }
        iVar3 = -0x53b0dc74;
        if (iVar4 != -0x7b1a4929) {
          iVar3 = iVar2;
        }
        if (iVar4 < -0x53b0dc74) {
          iVar1 = iVar3;
        }
      }
      if (iVar4 < 0x3ff4c84d) break;
      iVar1 = iVar4;
      if (iVar4 == 0x72d6eaa5) {
        iVar1 = -0x53b0dc74;
      }
      iVar3 = -0x6e32c8b7;
      if (iVar4 != 0x7fb7e920) {
        iVar3 = iVar1;
      }
      iVar1 = 0x7fb7e920;
      if (iVar4 != 0x3ff4c84d) {
        iVar1 = iVar3;
      }
    }
    iVar1 = -0x6e32c8b7;
  } while (((iVar4 == -0x1a054d91) || (iVar1 = -0x5192b5f5, iVar4 == -0x6dbea8c)) ||
          (iVar1 = iVar4, iVar4 != 0x1968863e));
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack
// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthorgb2(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulong unaff_x23;
  ulong unaff_x25;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 local_310;
  long lStack_308;
  long *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  long lStack_2c8;
  long *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  char local_289;
  ID local_288;
  undefined8 local_280;
  char *local_278;
  ulong local_270;
  char local_261;
  long **local_260;
  long *local_258;
  long local_250;
  undefined8 local_248;
  undefined8 local_240;
  char *local_238;
  ulong local_230;
  char local_221;
  ulong local_220;
  char local_211;
  char *local_210;
  ID local_208;
  undefined8 local_200;
  char *local_1f8;
  ulong local_1f0;
  long **local_1e8;
  long *local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  ulong local_1b8;
  char local_1a9;
  ulong local_1a8;
  char local_199;
  char *local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_00068050;
  iVar1 = 0x2aec52df;
LAB_0002aa98:
  do {
    while (iVar4 = iVar1, iVar1 = iVar4, iVar4 < -0xf9e568d) {
      if (iVar4 < -0x4234b79e) {
        if (iVar4 < -0x54095f96) {
          if (iVar4 < -0x635c28c7) {
            if (iVar4 < -0x6973cbc4) {
              if (iVar4 == -0x7ff5f271) {
                uStack_2a8 = 0;
                local_2b0 = 0;
                uStack_298 = 0;
                uStack_2a0 = 0;
                lStack_2c8 = 0;
                local_2d0 = 0;
                uStack_2b8 = 0;
                local_2c0 = (long *)0x0;
                m1bView(param_1,(SEL)"m1bView");
                iVar1 = 0x559956d9;
              }
              else {
                iVar1 = 0x16a9c0d2;
                if ((iVar4 != -0x6d025179) && (iVar1 = iVar4, iVar4 == -0x69bde6ef))
                goto LAB_0002b0b4;
              }
            }
            else {
              iVar1 = -0x442c8305;
              if (iVar4 != -0x6973cbc4) {
                if (iVar4 == -0x66ee0c51) {
                  local_211 = local_220 == 0;
                  iVar1 = -0x1343885f;
                }
                else {
                  iVar1 = iVar4;
                  if (iVar4 == -0x640644fb) {
LAB_0002b5f0:
                    iVar1 = -0x2b23aa54;
                  }
                }
              }
            }
          }
          else if (iVar4 < -0x5bb5498e) {
            if (iVar4 < -0x5cbb1676) {
              if (iVar4 == -0x635c28c7) {
                iVar1 = -0x9b245c4;
                if (local_289 == '\0') {
                  iVar1 = -0x69bde6ef;
                }
              }
              else if (iVar4 == -0x63260ab2) {
                if (*(long *)PTR____stack_chk_guard_00068050 != local_70) {
                    // WARNING: Subroutine does not return
                  ___stack_chk_fail();
                }
                return;
              }
            }
            else if (iVar4 == -0x5cbb1676) {
              _objc_enumerationMutation(local_200);
              iVar1 = -0x1278ccca;
            }
            else if (iVar4 == -0x5c09706c) {
              iVar1 = 0x50b0c321;
            }
          }
          else if (iVar4 == -0x5bb5498e) {
            iVar1 = -0x28dfa502;
          }
          else if (iVar4 == -0x57b5f9a9) {
            _objc_msgSend(local_248,local_238,local_240);
            local_230 = local_188 + 1;
            local_221 = local_230 < local_190;
            iVar1 = 0x5391db3d;
          }
          else if (iVar4 == -0x567a98da) {
            _objc_release(local_200);
            goto LAB_0002b5f0;
          }
        }
        else if (iVar4 < -0x49aded60) {
          if (iVar4 < -0x4fd671d8) {
            if (iVar4 == -0x54095f96) {
              iVar1 = -0x10093b52;
            }
            else {
              iVar1 = -0x5cbb1676;
              if ((iVar4 != -0x5164bcfb) && (iVar1 = iVar4, iVar4 == -0x50e3a2b2)) {
                local_180 = unaff_x25;
                local_178 = unaff_x27;
                iVar1 = 0x50b0c321;
                if (**local_1e8 != local_1d8) {
                  iVar1 = -0x5164bcfb;
                }
              }
            }
          }
          else {
            iVar1 = 0x76da5a71;
            if (iVar4 != -0x4fd671d8) {
              if (iVar4 == -0x4c0b0bf8) {
                local_238 = "setTintColor:";
                iVar1 = -0x205a76fa;
              }
              else {
                iVar1 = iVar4;
                if (iVar4 == -0x4b7448e7) {
                  _objc_msgSend(local_188,&_OBJC_CLASS___UIColor,"performSelector:",
                                "secondaryLabelColor");
                  iVar1 = 0x54586e0d;
                }
              }
            }
          }
        }
        else if (iVar4 < -0x442c8305) {
          if (iVar4 == -0x49aded60) {
            local_199 = local_1a8 == 0;
            iVar1 = -0x6973cbc4;
          }
          else if (iVar4 == -0x494b0bfd) {
            local_1d8 = *local_1e0;
            iVar1 = -0xf9e568d;
          }
          else if (iVar4 == -0x467ecc44) {
            local_289 = _objc_msgSend(DAT_000a3e78,"fileExistsAtPath:",_g_isMirroredMarkfbs2);
            iVar1 = -0x54095f96;
          }
        }
        else if (iVar4 < -0x430b5de2) {
          if (iVar4 == -0x442c8305) {
            iVar1 = 0x13362970;
          }
          else if (iVar4 == -0x43cabeaf) goto LAB_0002ae58;
        }
        else if (iVar4 == -0x430b5de2) {
          local_280 = _objc_msgSend(local_288,"subviews");
          _objc_retain(local_280);
          _objc_release(local_288);
          local_278 = "countByEnumeratingWithState:objects:count:";
          local_270 = _objc_msgSend(local_280,"countByEnumeratingWithState:objects:count:",
                                    &local_2d0,auStack_f0,0x10);
          local_261 = local_270 == 0;
          iVar1 = 0x38094d79;
        }
        else if (iVar4 == -0x4292d8b9) {
          local_1e0 = local_300;
          local_1e8 = &local_300;
          iVar1 = -0x494b0bfd;
        }
      }
      else if (iVar4 < -0x294bfc6e) {
        if (iVar4 < -0x3ba40af7) {
          if (iVar4 < -0x3e054be8) {
            iVar1 = -0x442c8305;
            if (iVar4 != -0x4234b79e) {
              if (iVar4 == -0x407919da) {
                uStack_2e8 = 0;
                local_2f0 = 0;
                uStack_2d8 = 0;
                uStack_2e0 = 0;
                lStack_308 = 0;
                local_310 = 0;
                uStack_2f8 = 0;
                local_300 = (long *)0x0;
                local_210 = "m1bView";
                local_208 = param_1;
                iVar1 = -0x3f1c2818;
              }
              else {
                iVar1 = -0x12f5c88b;
                if (iVar4 != -0x3f1c2818) {
                  iVar1 = iVar4;
                }
              }
            }
          }
          else if (iVar4 == -0x3e054be8) {
            _objc_msgSend(&_OBJC_CLASS___UIColor,"performSelector:","secondaryLabelColor");
            iVar1 = 0x16a9c0d2;
          }
          else {
            iVar2 = 0x5df12d62;
            if (iVar4 != -0x3ca582db) {
              iVar2 = iVar4;
            }
            iVar1 = -0x187f4e96;
            if (iVar4 != -0x3cdebf89) {
              iVar1 = iVar2;
            }
          }
        }
        else if (iVar4 < -0x30174937) {
          iVar1 = -0x43cabeaf;
          if (iVar4 != -0x34dbaa16) {
            iVar1 = iVar4;
          }
          iVar2 = -0x635c28c7;
          if (iVar4 != -0x38e76cee) {
            iVar2 = iVar1;
          }
          iVar1 = 0x316c8ff7;
          if (iVar4 != -0x3ba40af7) {
            iVar1 = iVar2;
          }
        }
        else {
          iVar1 = 0x1af71407;
          if (iVar4 != -0x30174937) {
            if (iVar4 == -0x2f0c0d7f) {
              _objc_msgSend(local_280,local_278,&local_2d0,auStack_f0,0x10);
              iVar1 = 0x851347f;
            }
            else {
              iVar1 = iVar4;
              if (iVar4 == -0x2b23aa54) {
                _objc_release(local_200);
                iVar1 = -0x275418e8;
              }
            }
          }
        }
      }
      else if (iVar4 < -0x187f4e96) {
        if (iVar4 < -0x21a89e73) {
          iVar1 = 0x3204b84f;
          if (iVar4 != -0x294bfc6e) {
            if (iVar4 == -0x28dfa502) {
              unaff_x27 = 0;
              unaff_x25 = local_1f0;
              iVar1 = -0x50e3a2b2;
            }
            else {
              iVar1 = -0x21a89e73;
              if (iVar4 != -0x275418e8) {
                iVar1 = iVar4;
              }
            }
          }
        }
        else {
          iVar1 = 0x316c8ff7;
          if (((iVar4 != -0x21a89e73) && (iVar1 = -0x57b5f9a9, iVar4 != -0x205a76fa)) &&
             (iVar1 = iVar4, iVar4 == -0x204c3c7e)) {
            _objc_enumerationMutation(local_280);
            iVar1 = 0x2ae3e0df;
          }
        }
      }
      else if (iVar4 < -0x1343885f) {
        iVar1 = -0x66ee0c51;
        if (iVar4 != -0x149ef862) {
          iVar1 = iVar4;
        }
        iVar2 = 0x76da5a71;
        if (iVar4 != -0x1754bdf6) {
          iVar2 = iVar1;
        }
        iVar1 = 0x726d49eb;
        if (iVar4 != -0x187f4e96) {
          iVar1 = iVar2;
        }
      }
      else if (iVar4 < -0x1278ccca) {
        if (iVar4 == -0x1343885f) {
          unaff_x28 = 0;
          unaff_x23 = local_220;
          iVar1 = 0x2010923;
          if (local_211 == '\0') {
            iVar1 = 0x3fc7e161;
          }
        }
        else if (iVar4 == -0x12f5c88b) goto LAB_0002b918;
      }
      else if (iVar4 == -0x1278ccca) {
        iVar1 = -0x5c09706c;
      }
      else if (iVar4 == -0x10093b52) {
        iVar1 = -0x38e76cee;
      }
    }
    if (iVar4 < 0x38094d79) {
      if (iVar4 < 0x8819f15) {
        if (iVar4 < 0x148def3) {
          if (iVar4 < -0x9b245c4) {
            iVar1 = -0x5bb5498e;
            if (iVar4 != -0xf9e568d) {
              if (iVar4 == -0xa6e3453) {
                _objc_enumerationMutation(local_280);
                iVar1 = -0x204c3c7e;
              }
              else {
                iVar1 = iVar4;
                if (iVar4 == -0x9fa9cba) {
                  _objc_msgSend(local_288,"subviews");
                  uVar3 = _objc_retainAutoreleasedReturnValue();
                  _objc_release(local_288);
                  _objc_msgSend(uVar3,"countByEnumeratingWithState:objects:count:",&local_2d0,
                                auStack_f0,0x10);
LAB_0002ae58:
                  iVar1 = -0x430b5de2;
                }
              }
            }
          }
          else {
            iVar1 = 0x559956d9;
            if (iVar4 != -0x9b245c4) {
              if (iVar4 == -0x6f0a403) {
                _objc_msgSend(local_1d0,local_1c0,local_1c8);
                iVar1 = 0x1af71407;
              }
              else {
                iVar1 = iVar4;
                if (iVar4 == -0x9266df) {
                  _objc_msgSend(local_208,local_210);
                  uVar3 = _objc_retainAutoreleasedReturnValue();
                  local_200 = _objc_msgSend(uVar3,"subviews");
                  _objc_retain(local_200);
                  _objc_release(uVar3);
                  iVar1 = -0x3ca582db;
                }
              }
            }
          }
        }
        else if (iVar4 < 0x7592cfa) {
          iVar1 = -0x4c0b0bf8;
          if (iVar4 != 0x639035c) {
            iVar1 = iVar4;
          }
          iVar2 = 0x1efac430;
          if (iVar4 != 0x2010923) {
            iVar2 = iVar1;
          }
          iVar1 = 0x7b57296;
          if (iVar4 != 0x148def3) {
            iVar1 = iVar2;
          }
        }
        else {
          iVar1 = -0x38e76cee;
          if (iVar4 != 0x7592cfa) {
            if (iVar4 == 0x7b57296) {
              local_198 = "AboutAuthorgb";
              iVar1 = 0x6b357e13;
            }
            else {
              iVar1 = iVar4;
              if (iVar4 == 0x851347f) {
                local_220 = _objc_msgSend(local_280,local_278,&local_2d0,auStack_f0,0x10);
                iVar1 = -0x149ef862;
              }
            }
          }
        }
      }
      else if (iVar4 < 0x1efac430) {
        if (iVar4 < 0x13362970) {
          if (iVar4 == 0x8819f15) {
            _objc_msgSend(local_208,local_210);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar3,"subviews");
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
LAB_0002b918:
            iVar1 = -0x9266df;
          }
          else {
            iVar1 = 0x851347f;
            if ((iVar4 != 0x12822271) && (iVar1 = iVar4, iVar4 == 0x12d640b2)) {
              uStack_2e8 = 0;
              local_2f0 = 0;
              uStack_2d8 = 0;
              uStack_2e0 = 0;
              lStack_308 = 0;
              local_310 = 0;
              uStack_2f8 = 0;
              local_300 = (long *)0x0;
LAB_0002b0b4:
              iVar1 = -0x407919da;
            }
          }
        }
        else if (iVar4 == 0x13362970) {
          unaff_x27 = 0;
          unaff_x25 = local_1a8;
          iVar1 = -0x640644fb;
          if (local_199 == '\0') {
            iVar1 = -0x50e3a2b2;
          }
        }
        else if (iVar4 == 0x16a9c0d2) {
          local_1c8 = _objc_msgSend(&_OBJC_CLASS___UIColor,"performSelector:","secondaryLabelColor")
          ;
          local_1c0 = "setTintColor:";
          iVar1 = 0x38ea5807;
        }
        else if (iVar4 == 0x1af71407) {
          _objc_msgSend(local_1d0,local_1c0,local_1c8);
          local_1b8 = local_178 + 1;
          local_1a9 = local_1b8 < local_180;
          iVar1 = 0x3a4175fe;
        }
      }
      else if (iVar4 < 0x2aec52df) {
        if (iVar4 == 0x1efac430) {
          _objc_release(local_280);
          iVar1 = 0x358e163e;
        }
        else if (iVar4 == 0x25c4566f) {
          _objc_retain(local_288);
          iVar1 = 0x3204b84f;
        }
        else {
          iVar1 = 0x4f615426;
          if (iVar4 != 0x2ae3e0df) {
            iVar1 = iVar4;
          }
        }
      }
      else if (iVar4 < 0x3204b84f) {
        iVar2 = 0x148def3;
        if (iVar4 != 0x316c8ff7) {
          iVar2 = iVar4;
        }
        iVar1 = -0x467ecc44;
        if (iVar4 != 0x2aec52df) {
          iVar1 = iVar2;
        }
      }
      else if (iVar4 == 0x3204b84f) {
        _objc_retain(local_288);
        iVar1 = -0x34dbaa16;
      }
      else {
        iVar1 = 0x712bbf67;
        if (iVar4 != 0x358e163e) {
          iVar1 = iVar4;
        }
      }
      goto LAB_0002aa98;
    }
    if (iVar4 < 0x54586e0d) {
      if (iVar4 < 0x4c7e6c12) {
        if (iVar4 < 0x3fc7e161) {
          if (iVar4 == 0x38094d79) {
            iVar1 = 0x2010923;
            if (local_261 == '\0') {
              iVar1 = -0x1754bdf6;
            }
          }
          else if (iVar4 == 0x38ea5807) {
            iVar1 = -0x30174937;
          }
          else if (iVar4 == 0x3a4175fe) {
            unaff_x25 = local_180;
            unaff_x27 = local_1b8;
            iVar1 = -0x50e3a2b2;
            if (local_1a9 == '\0') {
              iVar1 = 0x57126a13;
            }
          }
        }
        else if (iVar4 == 0x3fc7e161) {
          local_190 = unaff_x23;
          local_188 = unaff_x28;
          iVar1 = 0x726d49eb;
          if (**local_260 != local_250) {
            iVar1 = 0x48a8223e;
          }
        }
        else {
          iVar1 = -0x204c3c7e;
          if ((iVar4 != 0x48a8223e) && (iVar1 = iVar4, iVar4 == 0x4bf9ba15)) {
            unaff_x28 = 0;
            unaff_x23 = local_270;
            iVar1 = 0x3fc7e161;
          }
        }
      }
      else if (iVar4 < 0x4f615426) {
        iVar1 = -0x5bb5498e;
        if (iVar4 != 0x4c7e6c12) {
          if (iVar4 == 0x4cca81e7) {
            _objc_release(local_280);
            iVar1 = 0x1efac430;
          }
          else {
            iVar1 = -0x294bfc6e;
            if (iVar4 != 0x4d50cda6) {
              iVar1 = iVar4;
            }
          }
        }
      }
      else if (iVar4 < 0x50b0c321) {
        iVar1 = -0x3cdebf89;
        if ((iVar4 != 0x4f615426) && (iVar1 = iVar4, iVar4 == 0x4fde7663)) {
          _objc_msgSend(DAT_000a3e78,"fileExistsAtPath:",_g_isMirroredMarkfbs2);
          iVar1 = -0x467ecc44;
        }
      }
      else if (iVar4 == 0x50b0c321) {
        local_1d0 = *(undefined8 *)(lStack_308 + local_178 * 8);
        iVar1 = -0x6d025179;
      }
      else if (iVar4 == 0x5391db3d) {
        unaff_x23 = local_190;
        unaff_x28 = local_230;
        iVar1 = 0x3fc7e161;
        if (local_221 == '\0') {
          iVar1 = 0x12822271;
        }
      }
    }
    else if (iVar4 < 0x5d7421eb) {
      if (iVar4 < 0x5855d821) {
        if (iVar4 == 0x54586e0d) {
          local_248 = *(undefined8 *)(lStack_2c8 + local_188 * 8);
          local_240 = _objc_msgSend(local_248,&_OBJC_CLASS___UIColor,"performSelector:",
                                    "secondaryLabelColor");
          iVar1 = 0x639035c;
        }
        else if (iVar4 == 0x559956d9) {
          uStack_2a8 = 0;
          local_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          lStack_2c8 = 0;
          local_2d0 = 0;
          uStack_2b8 = 0;
          local_2c0 = (long *)0x0;
          local_288 = m1bView(param_1,(SEL)"m1bView");
          iVar1 = 0x4d50cda6;
        }
        else if (iVar4 == 0x57126a13) {
          local_1a8 = _objc_msgSend(local_200,local_1f8,&local_310,auStack_170,0x10);
          iVar1 = -0x49aded60;
        }
      }
      else if (iVar4 == 0x5855d821) {
        iVar1 = 0x5ae3d10a;
      }
      else {
        iVar1 = -0x3cdebf89;
        if ((iVar4 != 0x59c06d37) && (iVar1 = iVar4, iVar4 == 0x5ae3d10a)) {
          local_250 = *local_258;
          iVar1 = 0x4bf9ba15;
        }
      }
    }
    else if (iVar4 < 0x6b357e13) {
      if (iVar4 == 0x5d7421eb) {
        _objc_msgSend(local_248,local_238,local_240);
        iVar1 = -0x57b5f9a9;
      }
      else if (iVar4 == 0x5df12d62) {
        local_1f8 = "countByEnumeratingWithState:objects:count:";
        local_1f0 = _objc_msgSend(local_200,"countByEnumeratingWithState:objects:count:",&local_310,
                                  auStack_170,0x10);
        iVar1 = -0x640644fb;
        if (local_1f0 != 0) {
          iVar1 = -0x4292d8b9;
        }
      }
      else if (iVar4 == 0x65a6b5d1) {
        _objc_enumerationMutation(local_200);
        iVar1 = -0x5cbb1676;
      }
    }
    else if (iVar4 < 0x726d49eb) {
      if (iVar4 == 0x6b357e13) {
        _objc_msgSend(param_1,local_198);
        iVar1 = -0x63260ab2;
      }
      else if (iVar4 == 0x712bbf67) {
        iVar1 = 0x7b57296;
      }
    }
    else {
      iVar1 = 0x54586e0d;
      if ((iVar4 != 0x726d49eb) && (iVar1 = iVar4, iVar4 == 0x76da5a71)) {
        local_258 = local_2c0;
        local_260 = &local_2c0;
        iVar1 = 0x5855d821;
      }
    }
  } while( true );
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthoropen(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = 0x5d0f3fee;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x82981c9 < iVar5) {
            iVar2 = iVar5;
            if (iVar5 == 0x5d0f3fee) {
              iVar2 = -0x70784f68;
            }
            iVar1 = -0x70784f68;
            if (iVar5 != 0x5c6744cb) {
              iVar1 = iVar2;
            }
            iVar2 = -0x7833d7ee;
            if (iVar5 != 0xbeac280) {
              iVar2 = iVar5;
            }
            iVar3 = -0x354ed195;
            if (iVar5 != 0x82981ca) {
              iVar3 = iVar2;
            }
            bVar4 = iVar5 < 0x5c6744cb;
            iVar5 = iVar1;
            if (bVar4) {
              iVar5 = iVar3;
            }
          }
          if (-0x70784f69 < iVar5) break;
          iVar2 = -0x7833d7ee;
          if (iVar5 != -0x70f39cc5) {
            iVar2 = iVar5;
          }
          bVar4 = iVar5 != -0x7833d7ee;
          iVar5 = -0x59949036;
          if (bVar4) {
            iVar5 = iVar2;
          }
        }
        if (iVar5 != -0x70784f68) break;
        iVar5 = 0x82981ca;
      }
      if (iVar5 != -0x354ed195) break;
      iVar5 = 0xbeac280;
    }
  } while (iVar5 != -0x59949036);
  return;
}



// Function Stack Size: 0x10 bytes

void SettingViewControllernn::AboutAuthoropen2(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char **ppcVar6;
  int iVar7;
  int iVar8;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  char *local_230;
  char *local_228;
  char *local_220;
  char *local_218;
  char *local_210;
  ID local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  undefined8 *local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  ID local_1c0;
  char local_1b1;
  undefined8 local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  ulong local_198;
  char local_189;
  undefined8 *local_188;
  long *local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  ulong local_160;
  char local_151;
  ulong local_150;
  char local_141;
  char *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  ulong local_118;
  char local_109;
  undefined8 *local_108;
  long *local_100;
  long local_f8;
  char local_e9;
  undefined8 local_e8;
  char *local_e0;
  char *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  char local_b1;
  ulong local_b0;
  char local_a1;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  
  ppcVar6 = &local_230;
  local_80 = *(long *)PTR____stack_chk_guard_00068050;
  local_1f0 = "systemBlueColor";
  local_1e8 = "countByEnumeratingWithState:objects:count:";
  local_200 = "subviews";
  local_1f8 = "defaultManager";
  local_218 = "AboutAuthoropen";
  local_210 = "fileExistsAtPath:";
  local_228 = "systemVersion";
  local_220 = "currentDevice";
  local_230 = "floatValue";
  local_208 = param_1;
  iVar3 = -0x440c4109;
LAB_0002beec:
  while (iVar7 = iVar3, puVar1 = local_1d0, puVar2 = local_1e0, iVar3 = iVar7, 0x6fd608b < iVar7) {
    if (iVar7 < 0x3d4b4895) {
      if (iVar7 < 0x277739b2) {
        if (iVar7 < 0x190bba1b) {
          if (iVar7 < 0x15890d32) {
            if (iVar7 < 0xc0ece16) {
              iVar3 = -0x77b90366;
              if ((iVar7 != 0x6fd608c) && (iVar3 = iVar7, iVar7 == 0x9d3580b)) {
                _objc_enumerationMutation(local_1a8);
                iVar3 = 0x58f3d2d5;
              }
            }
            else {
              iVar3 = 0x190bba1b;
              if ((iVar7 != 0xc0ece16) && (iVar3 = iVar7, iVar7 == 0xe3fcc81)) {
                iVar3 = -0x7d780ca;
              }
            }
          }
          else if (iVar7 < 0x180ce719) {
            iVar3 = -0x2029df18;
            if ((iVar7 != 0x15890d32) && (iVar3 = iVar7, iVar7 == 0x15a0c9af)) {
              _objc_msgSend(local_1a8,local_1a0,local_1e0,local_1d8,0x10);
              iVar3 = -0x3f26a6d3;
            }
          }
          else if (iVar7 == 0x180ce719) {
            iVar3 = 0x2a3244da;
          }
          else if (iVar7 == 0x18c9afcd) {
            iVar3 = 0x42122a6;
          }
        }
        else if (iVar7 < 0x1d3e0674) {
          if (iVar7 < 0x1b419b48) {
            iVar8 = -0x6e2d3798;
            if (iVar7 != 0x19d3866d) {
              iVar8 = iVar7;
            }
            iVar3 = 0x47c4d950;
            if (iVar7 != 0x190bba1b) {
              iVar3 = iVar8;
            }
          }
          else if (iVar7 == 0x1b419b48) {
            _objc_msgSend(&_OBJC_CLASS___UIDevice,local_220);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_228);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,local_230);
            _objc_release(uVar5);
            _objc_release(uVar4);
            iVar3 = 0x543e6ef1;
            if ((float)CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) < 15.0
               ) {
              iVar3 = -0x7d780ca;
            }
          }
          else {
            iVar3 = 0x4e3aed7e;
            if (iVar7 != 0x1bf5053d) {
              iVar3 = iVar7;
            }
          }
        }
        else if (iVar7 < 0x212e869b) {
          if (iVar7 == 0x1d3e0674) {
            local_168 = *(undefined8 *)(local_170 + local_98 * 8);
            iVar3 = 0x20902fac;
          }
          else {
            iVar3 = 0x6f7b1514;
            if (iVar7 != 0x20902fac) {
              iVar3 = iVar7;
            }
          }
        }
        else {
          iVar3 = 0x58f3d2d5;
          if (iVar7 != 0x212e869b) {
            if (iVar7 == 0x22e1938f) {
              _objc_enumerationMutation(local_128);
              iVar3 = -0x284d8884;
            }
            else {
              iVar3 = iVar7;
              if (iVar7 == 0x2468129e) {
                iVar3 = -0x74928c7;
              }
            }
          }
        }
      }
      else if (iVar7 < 0x31dac477) {
        if (iVar7 < 0x2a7793f5) {
          if (iVar7 < 0x295536de) {
            iVar3 = -0x7e87cdfd;
            if (iVar7 != 0x277739b2) {
              iVar8 = 0x27af69a3;
LAB_0002d150:
              iVar3 = iVar7;
              if (iVar7 == iVar8) {
                iVar3 = 0x3d4b4895;
              }
            }
          }
          else {
            iVar3 = 0x42122a6;
            if ((iVar7 != 0x295536de) && (iVar3 = iVar7, iVar7 == 0x2a3244da)) goto LAB_0002d798;
          }
        }
        else if (iVar7 < 0x2fb5ed8e) {
          if (iVar7 == 0x2a7793f5) {
LAB_0002d400:
            iVar3 = -0x44da3c78;
          }
          else if (iVar7 == 0x2bad56fe) {
            puVar1 = local_1e0 + 4;
            local_1e0[5] = 0;
            *puVar1 = 0;
            puVar2[7] = 0;
            puVar2[6] = 0;
            puVar2[1] = 0;
            *puVar2 = 0;
            puVar2[3] = 0;
            puVar2[2] = 0;
            _objc_msgSend(local_1c0,"m1bView");
            goto LAB_0002ca24;
          }
        }
        else {
          iVar3 = -0x349f410a;
          if ((iVar7 != 0x2fb5ed8e) && (iVar3 = iVar7, iVar7 == 0x318a508b)) {
            iVar3 = -0x182e3b17;
          }
        }
      }
      else if (iVar7 < 0x35aecbe5) {
        if (iVar7 < 0x337bb4b4) {
          if (iVar7 == 0x31dac477) {
            iVar3 = 0x383aa61a;
          }
          else if (iVar7 == 0x32073d6f) {
            unaff_x22 = local_90;
            unaff_x26 = local_c0;
            iVar3 = -0x71a43f3d;
            if (local_b1 == '\0') {
              iVar3 = -0x43fbd300;
            }
          }
        }
        else {
          iVar3 = -0x74928c7;
          if ((iVar7 != 0x337bb4b4) && (iVar3 = iVar7, iVar7 == 0x347c7413)) {
            iVar3 = -0x7117f0d7;
          }
        }
      }
      else if (iVar7 < 0x36777149) {
        if (iVar7 == 0x35aecbe5) {
          puVar1 = local_1e0 + 4;
          local_1e0[5] = 0;
          *puVar1 = 0;
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          local_1b0 = _objc_msgSend(local_1c0,"m1bView");
          iVar3 = -0x27d5be01;
        }
        else if (iVar7 == 0x360a6a82) {
          iVar3 = -0x7ad14f0b;
        }
      }
      else if (iVar7 == 0x36777149) {
        _objc_retain(local_1b0);
        local_1a8 = _objc_msgSend(local_1b0,local_200);
        _objc_retain(local_1a8);
        _objc_release(local_1b0);
        local_1a0 = local_1e8;
        local_198 = _objc_msgSend(local_1a8,local_1e8,local_1e0,local_1d8,0x10);
        iVar3 = -0x8573016;
      }
      else {
        iVar3 = -0x75b4dfae;
        if ((iVar7 != 0x36b3872d) && (iVar3 = iVar7, iVar7 == 0x383aa61a)) goto LAB_0002c498;
      }
    }
    else if (iVar7 < 0x5c6a973e) {
      if (iVar7 < 0x500605a7) {
        if (iVar7 < 0x4386b0cc) {
          if (iVar7 < 0x416bb708) {
            if (iVar7 == 0x3d4b4895) {
              iVar3 = 0xe3fcc81;
            }
            else if (iVar7 == 0x3df71a38) {
              _objc_msgSend(&_OBJC_CLASS___NSFileManager,local_1f8);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              uVar4 = DAT_000a3e78;
              DAT_000a3e78 = uVar5;
              _objc_release(uVar4);
              iVar3 = -0x543d8df;
            }
          }
          else if (iVar7 == 0x416bb708) {
            iVar3 = 0x18c9afcd;
          }
          else if (iVar7 == 0x4318b5a5) {
            iVar3 = 0x61df7883;
          }
        }
        else if (iVar7 < 0x4db7e23c) {
          iVar8 = 0x5b8bd33;
          if (iVar7 != 0x47c4d950) {
            iVar8 = iVar7;
          }
          iVar3 = -0x7117f0d7;
          if (iVar7 != 0x4386b0cc) {
            iVar3 = iVar8;
          }
        }
        else {
          if (iVar7 != 0x4db7e23c) {
            iVar8 = 0x4e3aed7e;
            goto LAB_0002d180;
          }
LAB_0002d798:
          iVar3 = 0x1d3e0674;
        }
      }
      else if (iVar7 < 0x57c0542d) {
        if (iVar7 < 0x5699a4e6) {
          if (iVar7 == 0x500605a7) {
            uVar4 = _objc_msgSend(local_168,&_OBJC_CLASS___UIColor,"performSelector:",local_1f0);
            _objc_msgSend(local_168,"setTintColor:",uVar4);
            local_160 = local_98 + 1;
            local_151 = local_160 < local_a0;
            iVar3 = -0x5dc4859d;
          }
          else if (iVar7 == 0x543e6ef1) {
            iVar3 = 0x6d2b6d33;
          }
        }
        else if (iVar7 == 0x5699a4e6) {
          iVar3 = -0x72acbe8d;
        }
        else if (iVar7 == 0x56e54195) goto LAB_0002d400;
      }
      else if (iVar7 < 0x58f3d2d5) {
        if (iVar7 == 0x57c0542d) {
          iVar3 = -0x3e6d0e3;
        }
        else if (iVar7 == 0x58854591) {
          unaff_x27 = 0;
          unaff_x23 = local_198;
          iVar3 = -0x6eebeec;
        }
      }
      else if (iVar7 == 0x58f3d2d5) {
        _objc_enumerationMutation(local_1a8);
        iVar3 = 0x416bb708;
      }
      else {
        iVar3 = -0x74ce141c;
        if ((iVar7 != 0x5a9fffc7) && (iVar3 = iVar7, iVar7 == 0x5b80619b)) {
          iVar3 = -0x7e87cdfd;
        }
      }
    }
    else if (iVar7 < 0x65555e20) {
      if (iVar7 < 0x61d12d65) {
        if (iVar7 < 0x602efbc2) {
          if (iVar7 == 0x5dedcc9b) {
            _objc_enumerationMutation(local_128);
            goto LAB_0002d2f0;
          }
          if (iVar7 == 0x5ed97920) {
            local_e8 = *(undefined8 *)(local_1d0[1] + local_88 * 8);
            local_d0 = &_OBJC_CLASS___UIColor;
            local_e0 = local_1f0;
            local_d8 = "performSelector:";
            iVar3 = -0x20fe852a;
          }
          else if (iVar7 == 0x5c6a973e) {
            if (*(long *)PTR____stack_chk_guard_00068050 != local_80) {
                    // WARNING: Subroutine does not return
              ___stack_chk_fail();
            }
            return;
          }
        }
        else {
          iVar8 = 0x347c7413;
          if (iVar7 != 0x61a11ca6) {
            iVar8 = iVar7;
          }
          iVar3 = -0x74ce141c;
          if (iVar7 != 0x602efbc2) {
            iVar3 = iVar8;
          }
        }
      }
      else if (iVar7 < 0x62f1fdbb) {
        iVar8 = 0x58854591;
        if (iVar7 != 0x61df7883) {
          iVar8 = iVar7;
        }
        iVar3 = 0x19d3866d;
        if (iVar7 != 0x61d12d65) {
          iVar3 = iVar8;
        }
      }
      else {
        if (iVar7 != 0x62f1fdbb) {
          iVar8 = 0x64266a39;
          goto LAB_0002d150;
        }
        iVar3 = -0x513f7a04;
        if (local_189 == '\0') {
          iVar3 = -0x26fa557e;
        }
      }
    }
    else if (iVar7 < 0x6e912685) {
      if (iVar7 < 0x6aaf545f) {
        if (iVar7 == 0x65555e20) {
LAB_0002d410:
          iVar3 = -0x7abef20f;
        }
        else if (iVar7 == 0x68c242fe) {
          _objc_release(local_128);
          iVar3 = -0xa79f692;
        }
      }
      else if (iVar7 == 0x6aaf545f) {
        local_c8 = _objc_msgSend(local_d0,local_d8,local_e0);
        iVar3 = 0x15890d32;
      }
      else {
        iVar3 = 0x1bf5053d;
        if (iVar7 != 0x6d2b6d33) {
          iVar3 = iVar7;
        }
      }
    }
    else if (iVar7 < 0x7118f544) {
      if (iVar7 == 0x6e912685) {
        iVar3 = -0x5925c945;
      }
      else if (iVar7 == 0x6f7b1514) {
        iVar3 = 0x500605a7;
      }
    }
    else {
      iVar3 = -0x182e3b17;
      if (iVar7 != 0x7118f544) {
        if (iVar7 == 0x79ce9abc) {
          iVar3 = -0x2a12113;
          if (local_e9 == '\0') {
            iVar3 = -0x2099e129;
          }
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == 0x7e19f932) {
            iVar3 = 0x19d3866d;
          }
        }
      }
    }
  }
  if (iVar7 < -0x349f410a) {
    if (iVar7 < -0x6bd9f0e5) {
      if (iVar7 < -0x75ad0d5f) {
        if (iVar7 < -0x7908d510) {
          if (iVar7 < -0x7ad14f0b) {
            if (iVar7 == -0x7e87cdfd) {
              iVar3 = 0x5c6a973e;
            }
            else if (iVar7 == -0x7b4cbed8) {
LAB_0002c498:
              iVar3 = -0xf436e31;
            }
          }
          else if (iVar7 == -0x7ad14f0b) {
            local_a1 = local_b0 == 0;
            iVar3 = -0x2b15cfbc;
          }
          else if (iVar7 == -0x7abef20f) {
            local_170 = local_1e0[1];
            iVar3 = 0x180ce719;
          }
        }
        else if (iVar7 < -0x775d2ac3) {
          iVar8 = -0x36167b0e;
          if (iVar7 != -0x77b90366) {
            iVar8 = iVar7;
          }
          iVar3 = 0x61df7883;
          if (iVar7 != -0x7908d510) {
            iVar3 = iVar8;
          }
        }
        else if (iVar7 == -0x775d2ac3) {
          unaff_x26 = 0;
          unaff_x22 = local_118;
          iVar3 = -0x71a43f3d;
        }
        else if (iVar7 == -0x75b4dfae) goto LAB_0002d410;
      }
      else if (iVar7 < -0x7117f0d7) {
        if (iVar7 < -0x72acbe8d) {
          iVar8 = -0xbe94f65;
          if (iVar7 != -0x74ce141c) {
            iVar8 = iVar7;
          }
          iVar3 = -0x77b90366;
          if (iVar7 != -0x75ad0d5f) {
            iVar3 = iVar8;
          }
        }
        else if (iVar7 == -0x72acbe8d) {
          local_189 = local_198 == 0;
          iVar3 = 0x62f1fdbb;
        }
        else if (iVar7 == -0x71a43f3d) {
          local_90 = unaff_x22;
          local_88 = unaff_x26;
          iVar3 = -0x5925c945;
        }
      }
      else if (iVar7 < -0x6e2d3798) {
        if (iVar7 == -0x7117f0d7) {
          iVar3 = -0x5b65f557;
        }
        else if (iVar7 == -0x6e713387) {
          iVar3 = 0x47c4d950;
        }
      }
      else if (iVar7 == -0x6e2d3798) {
        iVar3 = -0x6d2e8029;
        if (local_1b1 == '\0') {
          iVar3 = -0x10f8bc1a;
        }
      }
      else {
        iVar3 = -0x3f26a6d3;
        if ((iVar7 != -0x6d5742c3) && (iVar3 = iVar7, iVar7 == -0x6d2e8029)) {
LAB_0002ca24:
          iVar3 = 0x35aecbe5;
        }
      }
    }
    else if (iVar7 < -0x50eab717) {
      if (iVar7 < -0x5b65f557) {
        if (iVar7 < -0x5f0ab7c3) {
          iVar3 = 0x68c242fe;
          if ((iVar7 != -0x6bd9f0e5) && (iVar3 = iVar7, iVar7 == -0x62fa2aa6)) {
            unaff_x26 = 0;
            unaff_x22 = local_b0;
            iVar3 = -0x6bd9f0e5;
            if (local_a1 == '\0') {
              iVar3 = -0x71a43f3d;
            }
          }
        }
        else if (iVar7 == -0x5f0ab7c3) {
          iVar3 = -0x2c88f362;
        }
        else if ((iVar7 == -0x5dc4859d) &&
                (unaff_x23 = local_a0, unaff_x27 = local_160, iVar3 = -0x6eebeec, local_151 == '\0')
                ) {
          iVar3 = -0x6d5742c3;
        }
      }
      else if (iVar7 < -0x55750368) {
        if (iVar7 == -0x5b65f557) {
          iVar3 = 0x1b419b48;
        }
        else if (iVar7 == -0x5925c945) {
          local_e9 = *(long *)*local_108 == local_f8;
          iVar3 = 0x79ce9abc;
        }
      }
      else if (iVar7 == -0x55750368) {
        local_128 = local_130;
        _objc_retain(local_130);
        _objc_release(local_138);
        local_120 = local_1e8;
        local_118 = _objc_msgSend(local_128,local_1e8,local_1d0,local_1c8,0x10);
        local_109 = local_118 == 0;
        iVar3 = -0x26e09a98;
      }
      else if (iVar7 == -0x513f7a04) {
        _objc_release(local_1a8);
        iVar3 = 0x318a508b;
      }
    }
    else if (iVar7 < -0x43fbd300) {
      if (iVar7 < -0x44da3c78) {
        if (iVar7 == -0x50eab717) {
          local_1b1 = _objc_msgSend(DAT_000a3e78,local_210,_g_isMirroredMarkfbs2);
          iVar3 = 0x61d12d65;
        }
        else {
          iVar3 = 0x337bb4b4;
          if (iVar7 != -0x502309fa) {
            iVar3 = iVar7;
          }
        }
      }
      else if (iVar7 == -0x44da3c78) {
        local_108 = local_1d0 + 2;
        iVar3 = -0x502309fa;
      }
      else if (iVar7 == -0x440c4109) {
        iVar3 = -0x543d8df;
      }
    }
    else if (iVar7 < -0x3be084a0) {
      if (iVar7 == -0x43fbd300) {
        local_b0 = _objc_msgSend(local_128,local_120,local_1d0,local_1c8,0x10);
        iVar3 = -0x3be084a0;
      }
      else if (iVar7 == -0x3f26a6d3) {
        local_150 = _objc_msgSend(local_1a8,local_1a0,local_1e0,local_1d8,0x10);
        iVar3 = 0x57c0542d;
      }
    }
    else {
      iVar3 = -0x7ad14f0b;
      if (iVar7 != -0x3be084a0) {
        if (iVar7 == -0x3a9af854) {
          uVar4 = _objc_msgSend(local_168,&_OBJC_CLASS___UIColor,"performSelector:",local_1f0);
          _objc_msgSend(local_168,"setTintColor:",uVar4);
          iVar3 = 0x500605a7;
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == -0x36167b0e) {
            iVar3 = -0x2a12113;
          }
        }
      }
    }
    goto LAB_0002beec;
  }
  if (-0x17bd8ec5 < iVar7) {
    if (iVar7 < -0x74928c7) {
      if (iVar7 < -0xc44845b) {
        if (iVar7 < -0x10f8bc1a) {
          iVar3 = 0x6d2b6d33;
          if (iVar7 != -0x17bd8ec4) {
            iVar8 = -0x1508100d;
LAB_0002d180:
            iVar3 = iVar7;
            if (iVar7 == iVar8) {
              iVar3 = -0x5f0ab7c3;
            }
          }
        }
        else if (iVar7 == -0x10f8bc1a) {
          puVar2 = local_1d0 + 4;
          local_1d0[5] = 0;
          *puVar2 = 0;
          puVar1[7] = 0;
          puVar1[6] = 0;
          puVar1[1] = 0;
          *puVar1 = 0;
          puVar1[3] = 0;
          puVar1[2] = 0;
          local_140 = "m1bView";
          iVar3 = -0x1dafab2d;
        }
        else if (iVar7 == -0xf436e31) {
          local_f8 = *local_100;
          iVar3 = -0x775d2ac3;
        }
      }
      else if (iVar7 < -0xa79f692) {
        if (iVar7 == -0xc44845b) {
          unaff_x27 = 0;
          unaff_x23 = local_150;
          iVar3 = -0x513f7a04;
          if (local_141 == '\0') {
            iVar3 = -0x6eebeec;
          }
        }
        else if (iVar7 == -0xbe94f65) {
          iVar3 = 0x190bba1b;
        }
      }
      else if (iVar7 == -0xa79f692) {
        iVar3 = 0x5a9fffc7;
      }
      else {
        iVar3 = -0x72acbe8d;
        if ((iVar7 != -0x8573016) && (iVar3 = iVar7, iVar7 == -0x7d780ca)) {
          local_1c0 = local_208;
          AboutAuthoropen(local_208,(SEL)local_218);
          iVar3 = -0x50eab717;
        }
      }
    }
    else if (iVar7 < -0x543d8df) {
      if (iVar7 < -0x7274656) {
        if (iVar7 == -0x74928c7) {
          local_100 = (long *)*local_108;
          iVar3 = 0x31dac477;
        }
        else if (iVar7 == -0x745211e) {
          _objc_release(local_128);
          iVar3 = 0x68c242fe;
        }
      }
      else if (iVar7 == -0x7274656) {
        iVar3 = 0x5ed97920;
      }
      else if (iVar7 == -0x6eebeec) {
        local_a0 = unaff_x23;
        local_98 = unaff_x27;
        iVar3 = -0x75b4dfae;
        if (*(long *)*local_188 != local_178) {
          iVar3 = 0x212e869b;
        }
      }
    }
    else if (iVar7 < -0x2a12113) {
      if (iVar7 == -0x543d8df) {
        local_1e0 = (undefined8 *)((long)ppcVar6 + -0x40);
        local_1d8 = (undefined1 *)((long)ppcVar6 + -0xc0);
        local_1d0 = (undefined8 *)((long)ppcVar6 + -0x100);
        ppcVar6 = (char **)((long)ppcVar6 + -0x180);
        local_1c8 = (undefined1 *)ppcVar6;
        _objc_msgSend(&_OBJC_CLASS___NSFileManager,local_1f8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar4 = DAT_000a3e78;
        DAT_000a3e78 = uVar5;
        _objc_release(uVar4);
        iVar3 = 0x61a11ca6;
      }
      else if (iVar7 == -0x3e6d0e3) {
        local_141 = local_150 == 0;
        iVar3 = 0x2fb5ed8e;
      }
    }
    else {
      iVar3 = 0x5ed97920;
      if (iVar7 != -0x2a12113) {
        if (iVar7 == 0x42122a6) {
          iVar3 = 0x36b3872d;
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == 0x5b8bd33) {
            iVar3 = 0x277739b2;
          }
        }
      }
    }
    goto LAB_0002beec;
  }
  if (-0x26fa557f < iVar7) {
    if (iVar7 < -0x2029df18) {
      if (iVar7 < -0x20fe852a) {
        if (iVar7 == -0x26fa557e) {
          local_188 = local_1e0 + 2;
          local_180 = (long *)*local_188;
          iVar3 = -0x1e3ffc85;
        }
        else if (iVar7 == -0x26e09a98) {
          iVar3 = -0x6bd9f0e5;
          if (local_109 == '\0') {
            iVar3 = 0x56e54195;
          }
        }
      }
      else if (iVar7 == -0x20fe852a) {
        iVar3 = 0x6aaf545f;
      }
      else if (iVar7 == -0x2099e129) {
LAB_0002d2f0:
        iVar3 = 0x22e1938f;
      }
    }
    else if (iVar7 < -0x1dafab2d) {
      if (iVar7 == -0x2029df18) {
        _objc_msgSend(local_e8,"setTintColor:",local_c8);
        local_c0 = local_88 + 1;
        local_b1 = local_c0 < local_90;
        iVar3 = 0x32073d6f;
      }
      else if (iVar7 == -0x1e3ffc85) {
        local_178 = *local_180;
        iVar3 = -0x7908d510;
      }
    }
    else if (iVar7 == -0x1dafab2d) {
      local_138 = _objc_msgSend(local_1c0,local_140);
      _objc_retain(local_138);
      local_130 = _objc_msgSend(local_138,local_200);
      iVar3 = -0x33d9eed2;
    }
    else {
      iVar3 = -0x349f410a;
      if ((iVar7 != -0x1987a21a) && (iVar3 = iVar7, iVar7 == -0x182e3b17)) {
        iVar3 = 0xc0ece16;
      }
    }
    goto LAB_0002beec;
  }
  if (iVar7 < -0x2b15cfbc) {
    if (-0x2e5ac96f < iVar7) {
      if (iVar7 == -0x2e5ac96e) {
        _objc_msgSend(local_e8,"setTintColor:",local_c8);
        iVar3 = -0x2029df18;
      }
      else {
        iVar3 = 0x64266a39;
        if (iVar7 != -0x2c88f362) {
          iVar3 = iVar7;
        }
      }
      goto LAB_0002beec;
    }
    if (iVar7 == -0x349f410a) {
      iVar3 = -0xc44845b;
      goto LAB_0002beec;
    }
    if (iVar7 != -0x33d9eed2) goto LAB_0002beec;
  }
  else {
    if (-0x284d8885 < iVar7) {
      iVar8 = 0x36777149;
      if (iVar7 != -0x27d5be01) {
        iVar8 = iVar7;
      }
      iVar3 = 0x6fd608c;
      if (iVar7 != -0x284d8884) {
        iVar3 = iVar8;
      }
      goto LAB_0002beec;
    }
    if (iVar7 == -0x2b15cfbc) {
      iVar3 = -0x62fa2aa6;
      goto LAB_0002beec;
    }
    if (iVar7 != -0x291e63a4) goto LAB_0002beec;
    uVar4 = _objc_retain(local_130);
    _objc_release(local_138);
    _objc_msgSend(uVar4,local_1e8,local_1d0,local_1c8,0x10);
  }
  iVar3 = -0x55750368;
  goto LAB_0002beec;
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::presentationControllerDidDismiss_(ID param_1,SEL param_2,ID param_3)

{
  SEL extraout_x1;
  SEL extraout_x1_00;
  int iVar1;
  undefined8 local_68;
  
  iVar1 = -0x1231561f;
  do {
    while( true ) {
      while( true ) {
        while (iVar1 < 0x457debd8) {
          if (iVar1 == -0x3da9a25a) {
            _objc_release(local_68,param_2);
            iVar1 = 0x5daadc84;
            param_2 = extraout_x1;
          }
          else if (iVar1 == -0x3c11ffe4) {
            iVar1 = 0x50d5c64b;
          }
          else if (iVar1 == -0x1231561f) {
            iVar1 = 0x4a3ee439;
          }
        }
        if (0x50d5c64a < iVar1) break;
        if (iVar1 == 0x457debd8) {
          iVar1 = -0x3da9a25a;
        }
        else if (iVar1 == 0x4a3ee439) {
          iVar1 = -0x3c11ffe4;
          local_68 = param_3;
        }
      }
      if (iVar1 != 0x50d5c64b) break;
      _objc_retain(local_68);
      iVar1 = 0x457debd8;
      param_2 = extraout_x1_00;
    }
  } while (iVar1 != 0x5daadc84);
  return;
}



// Function Stack Size: 0x20 bytes

double SettingViewControllernn::tableView_heightForHeaderInSection_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double unaff_d8;
  undefined8 local_80;
  double local_78;
  
  _objc_retain(param_3);
  iVar3 = -0x79f0a117;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar3, iVar3 = -0x3988707f, iVar4 < 0x222d2a49) {
            if (iVar4 < -0x6d85f2a0) {
              if (iVar4 == -0x7c5414da) {
                unaff_d8 = 90.0;
                iVar3 = -0x6d85f2a0;
              }
              else {
                iVar1 = -0x6d85f2a0;
                dVar2 = 40.0;
                if (iVar4 != -0x7735fe91) {
                  iVar1 = iVar4;
                  dVar2 = unaff_d8;
                }
                iVar3 = 0x47d64a48;
                if (iVar4 != -0x79f0a117) {
                  unaff_d8 = dVar2;
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar4 < -0x3988707f) {
              if (iVar4 == -0x6d85f2a0) {
                local_78 = unaff_d8;
                iVar3 = 0x419fee6f;
              }
              else if (iVar4 != -0x4e463f8f) {
                iVar3 = iVar4;
              }
            }
            else {
              iVar1 = -0x7c5414da;
              if (iVar4 != -0x1260b663) {
                iVar1 = iVar4;
              }
              iVar3 = -0x7735fe91;
              if (iVar4 != -0x3988707f) {
                iVar3 = iVar1;
              }
            }
          }
          if (0x47d64a47 < iVar4) break;
          if (iVar4 == 0x222d2a49) {
            _objc_release(local_80);
            _objc_release(param_3);
            iVar3 = 0x419fee6f;
          }
          else {
            iVar3 = -0x1260b663;
            if ((iVar4 != 0x406eb606) && (iVar3 = iVar4, iVar4 == 0x419fee6f)) {
              _objc_release(local_80);
              _objc_release(param_3);
              iVar3 = 0x69d07785;
            }
          }
        }
        if (iVar4 < 0x6bb3590b) break;
        iVar1 = -0x1260b663;
        if (iVar4 != 0x6f8b465f) {
          iVar1 = iVar4;
        }
        if (iVar4 != 0x6bb3590b) {
          iVar3 = iVar1;
        }
      }
      if (iVar4 != 0x47d64a48) break;
      _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"infoDictionary");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_80 = _objc_msgSend(uVar6,"objectForKey:",&cf_CFBundleIdentifier);
      _objc_retain(local_80);
      _objc_release(local_80,uVar6);
      _objc_release(uVar5);
      iVar4 = _objc_msgSend(local_80,"containsString:",&cf_com_apple_springboard);
      iVar3 = 0x6f8b465f;
      if (iVar4 == 0) {
        iVar3 = -0x4e463f8f;
      }
    }
    iVar3 = iVar4;
  } while (iVar4 != 0x69d07785);
  return local_78;
}



// Function Stack Size: 0x20 bytes

long_long SettingViewControllernn::tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  long_long lVar2;
  int iVar3;
  
  iVar3 = 0x3ac371;
  do {
    while( true ) {
      while (iVar3 < 0x3ac371) {
        if (iVar3 == -0x45178270) {
          iVar3 = 0x49ade51d;
        }
        else if (iVar3 == -0x2b6624d4) {
          iVar3 = -0x45178270;
        }
      }
      if (iVar3 != 0x3ac371) break;
      iVar3 = -0x2b6624d4;
    }
  } while (iVar3 != 0x49ade51d);
  normalSettingTitle(param_1,(SEL)"normalSettingTitle");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend(uVar1,"count");
  _objc_release(uVar1);
  return lVar2;
}



// Function Stack Size: 0x20 bytes

void SettingViewControllernn::tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long_long lVar4;
  long lVar5;
  int iVar6;
  ID local_78;
  char local_69;
  char *local_68;
  
  _objc_retain(param_3);
  iVar1 = 0x1f827c4a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar6 = iVar1, iVar1 = iVar6, -0x26c33ac1 < iVar6) {
              if (iVar6 < 0x13f9402d) {
                if (iVar6 < -0x18e30872) {
                  if (iVar6 == -0x26c33ac0) {
                    _objc_release(param_3);
                    iVar1 = 0x645259b4;
                  }
                  else if (iVar6 == -0x1ce96a85) {
                    _objc_retain(param_4);
                    _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
                    local_78 = param_4;
                    iVar1 = -0x60467031;
                  }
                }
                else {
                  iVar1 = 0x71d5a7a7;
                  if (((iVar6 != -0x18e30872) && (iVar1 = 0x71d5a7a7, iVar6 != -0x14d6d23e)) &&
                     (iVar1 = iVar6, iVar6 == -0x544f529)) {
                    uVar3 = _objc_retain(param_4);
                    _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",uVar3,1);
                    iVar1 = -0x1ce96a85;
                  }
                }
              }
              else if (iVar6 < 0x645259b4) {
                if (iVar6 == 0x13f9402d) {
                  iVar1 = -0x2d921eea;
                }
                else {
                  iVar1 = -0x1ce96a85;
                  if ((iVar6 != 0x1f827c4a) && (iVar1 = iVar6, iVar6 == 0x493329b8)) {
                    _objc_release(local_78);
                    iVar1 = -0x5874f3dc;
                  }
                }
              }
              else if (iVar6 == 0x645259b4) {
                iVar1 = -0x6c367782;
              }
              else if (iVar6 == 0x688b6200) {
                lVar5 = _objc_msgSend(local_78,"section");
                local_69 = lVar5 == 1;
                iVar1 = -0x5e116595;
              }
              else if (iVar6 == 0x71d5a7a7) {
                local_68 = "reloadData";
                iVar1 = 0x13f9402d;
              }
            }
            if (-0x4bb2558a < iVar6) break;
            if (iVar6 < -0x5e116595) {
              iVar1 = -0x6d95cc43;
              if (iVar6 != -0x60467031) {
                iVar1 = iVar6;
              }
              iVar2 = -0x4bb25589;
              if (iVar6 != -0x6c367782) {
                iVar2 = iVar1;
              }
              iVar1 = 0x688b6200;
              if (iVar6 != -0x6d95cc43) {
                iVar1 = iVar2;
              }
            }
            else if (iVar6 == -0x5e116595) {
              iVar1 = -0x3bbe38dd;
              if (local_69 == '\0') {
                iVar1 = 0x493329b8;
              }
            }
            else {
              iVar1 = -0x26c33ac0;
              if ((iVar6 != -0x5874f3dc) && (iVar1 = iVar6, iVar6 == -0x51206355)) {
                _objc_release(param_3);
                iVar1 = -0x26c33ac0;
              }
            }
          }
          if (iVar6 < -0x32499298) break;
          if (iVar6 == -0x32499298) {
            _objc_msgSend(local_78,"section");
            iVar1 = 0x688b6200;
          }
          else {
            iVar1 = -0x4bb25589;
            if ((iVar6 != -0x2f693117) && (iVar1 = iVar6, iVar6 == -0x2d921eea)) {
              _objc_msgSend(param_3,local_68);
              iVar1 = 0x493329b8;
            }
          }
        }
        if (iVar6 != -0x4bb25589) break;
        iVar1 = -0x490f556e;
      }
      if (iVar6 != -0x3bbe38dd) break;
      lVar4 = _objc_msgSend(local_78,"row");
      setSelectedRow_(param_1,(SEL)"setSelectedRow:",lVar4);
      iVar1 = -0x14d6d23e;
    }
  } while (iVar6 != -0x490f556e);
  return;
}



// Function Stack Size: 0x10 bytes

ID SettingViewControllernn::m5bView(ID param_1,SEL param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_14;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar3 = -0x774d5599;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x20d62d20 < iVar3) {
            if (iVar3 < 0x344e0f82) {
              iVar1 = -0x41a5d9da;
              if (iVar3 != 0x2197c31a) {
                iVar1 = iVar3;
              }
              bVar2 = iVar3 != 0x20d62d21;
              iVar3 = 0x344e0f82;
              if (bVar2) {
                iVar3 = iVar1;
              }
            }
            else if (iVar3 == 0x344e0f82) {
              iVar3 = 0x3eff8f52;
            }
            else if (iVar3 == 0x3eff8f52) {
              local_8 = *local_10;
              iVar3 = -0x65e289f1;
            }
          }
          if (-0x65e289f2 < iVar3) break;
          if (iVar3 == -0x774d5599) {
            iVar3 = -0x704f9255;
          }
          else if (iVar3 == -0x704f9255) {
            local_14 = _m5bView;
            iVar3 = -0x61843009;
          }
        }
        if (iVar3 != -0x61843009) break;
        iVar3 = 0x2197c31a;
      }
      if (iVar3 != -0x41a5d9da) break;
      local_10 = (ID *)(param_1 + (long)local_14);
      iVar3 = 0x20d62d21;
    }
  } while (iVar3 != -0x65e289f1);
  return local_8;
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::setM5bView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_m5bView;
  uVar1 = _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  iVar2 = 0x3a7665d2;
  while( true ) {
    while (-0x47aaf5cd < iVar2) {
      if (iVar2 == -0x47aaf5cc) {
        iVar2 = -0x5eff0521;
      }
      else if (iVar2 == 0x3a7665d2) {
        *(undefined8 *)(param_1 + lVar3) = uVar1;
        _objc_release(uVar4);
        iVar2 = -0x47aaf5cc;
      }
    }
    if (iVar2 == -0x748786f3) break;
    if (iVar2 == -0x5eff0521) {
      iVar2 = -0x748786f3;
    }
  }
  return;
}



// Function Stack Size: 0x10 bytes

ID SettingViewControllernn::m5xbView(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 local_8;
  
  iVar1 = -0x542aee70;
  while( true ) {
    while (iVar1 < 0x6ace48d5) {
      if (iVar1 == -0x542aee70) {
        local_8 = *(ID *)(param_1 + (long)_m5xbView);
        iVar1 = -0x25de133e;
      }
      else if (iVar1 == -0x25de133e) {
        iVar1 = 0x70d0c35c;
      }
    }
    if (iVar1 == 0x6ace48d5) break;
    if (iVar1 == 0x70d0c35c) {
      iVar1 = 0x6ace48d5;
    }
  }
  return local_8;
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::setM5xbView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_18;
  
  lVar2 = (long)_m5xbView;
  uVar1 = _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  iVar4 = -0x70de3d2e;
  while( true ) {
    while (0x4dd84b07 < iVar4) {
      if (iVar4 == 0x5b5e7ade) {
        iVar4 = -0x774f04d3;
      }
      else if (iVar4 == 0x4dd84b08) {
        *(undefined8 *)(param_1 + lVar2) = uVar1;
        iVar4 = 0x5b5e7ade;
        local_18 = uVar3;
      }
    }
    if (iVar4 == -0x774f04d3) break;
    if (iVar4 == -0x70de3d2e) {
      iVar4 = 0x4dd84b08;
    }
  }
  _objc_release(local_18);
  return;
}



// Function Stack Size: 0x10 bytes

ID SettingViewControllernn::m0bView(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar1 = -0xa695c1e;
  while( true ) {
    while (-0xa695c1f < iVar1) {
      if (iVar1 == 0x1b80c721) {
        local_8 = *local_10;
        iVar1 = -0x7c434430;
      }
      else if (iVar1 == -0xa695c1e) {
        local_10 = (ID *)(param_1 + (long)_m0bView);
        iVar1 = -0x374f38dc;
      }
    }
    if (iVar1 == -0x7c434430) break;
    if (iVar1 == -0x374f38dc) {
      iVar1 = 0x1b80c721;
    }
  }
  return local_8;
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::setM0bView_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int iVar4;
  undefined8 local_38;
  
  iVar1 = 0x5837ed34;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 = iVar1, iVar4 < -0x181d06ac) {
          if (iVar4 < -0x2854e862) {
            if (iVar4 == -0x773f0465) {
              iVar1 = -0x2659e04e;
            }
            else {
              iVar1 = iVar4;
              if (iVar4 == -0x3221a3a2) {
                IVar3 = *local_38;
                *local_38 = param_3;
                _objc_release(IVar3,param_2);
                param_2 = extraout_x1;
                iVar1 = -0x181d06ac;
              }
            }
          }
          else if (iVar4 == -0x2854e862) {
            local_38 = (ID *)(param_1 + (long)_m0bView);
            _objc_retain(param_3);
            param_2 = extraout_x1_00;
            iVar1 = 0x4f83241a;
          }
          else {
            iVar2 = -0x2854e862;
            if (iVar4 != -0x253c2b6a) {
              iVar2 = iVar4;
            }
            iVar1 = -0x253c2b6a;
            if (iVar4 != -0x2659e04e) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar4 < 0x36ed665d) break;
        iVar1 = iVar4;
        if (iVar4 == 0x5837ed34) {
          iVar1 = -0x773f0465;
        }
        iVar2 = -0xcd0aca1;
        if (iVar4 != 0x4f83241a) {
          iVar2 = iVar1;
        }
        iVar1 = -0x773f0465;
        if (iVar4 != 0x36ed665d) {
          iVar1 = iVar2;
        }
      }
      if (iVar4 != -0x181d06ac) break;
      IVar3 = *local_38;
      *local_38 = param_3;
      _objc_release(IVar3,param_2);
      param_2 = extraout_x1_01;
      iVar1 = 0x35308da;
    }
    iVar1 = -0x181d06ac;
  } while ((iVar4 == -0xcd0aca1) || (iVar1 = iVar4, iVar4 != 0x35308da));
  return;
}



// Function Stack Size: 0x10 bytes

ID SettingViewControllernn::m1bView(ID param_1,SEL param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long local_10;
  ID local_8;
  
  uVar2 = 0x7d3cb46f;
  do {
    while( true ) {
      while( true ) {
        while (uVar3 = uVar2, uVar2 = uVar3, 0x3602e3ed < uVar3) {
          if (uVar3 < 0x5af64f18) {
            uVar1 = 0x2a784009;
            if (uVar3 != 0x443f6be4) {
              uVar1 = uVar3;
            }
            uVar2 = 0x5af64f18;
            if (uVar3 != 0x3602e3ee) {
              uVar2 = uVar1;
            }
          }
          else if (uVar3 == 0x5af64f18) {
            local_10 = (long)_m1bView;
            uVar2 = 0x443f6be4;
          }
          else if (uVar3 == 0x7d3cb46f) {
            uVar2 = 0x1443cbc5;
          }
        }
        if (uVar3 < 0x1db3db36) break;
        uVar2 = 0x1443cbc5;
        if ((uVar3 != 0x1db3db36) && (uVar2 = uVar3, uVar3 == 0x2a784009)) {
          local_8 = *(ID *)(param_1 + local_10);
          uVar2 = 0xaa7037b;
        }
      }
      if (uVar3 != 0x1443cbc5) break;
      uVar2 = 0x3602e3ee;
    }
  } while (uVar3 != 0xaa7037b);
  return local_8;
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::setM1bView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long local_28;
  ID local_20;
  undefined8 *local_18;
  
  iVar3 = 0x1b0c3832;
  do {
    while (iVar3 < 0x1b0c3832) {
      if (iVar3 == -0x3d5da93c) {
        uVar1 = _objc_retain(param_3);
        uVar2 = *local_18;
        *local_18 = uVar1;
        _objc_release(uVar2);
        return;
      }
      if (iVar3 == -0x207dc979) {
        local_28 = (long)_m1bView;
        iVar3 = 0x73cbebb9;
        local_20 = param_1;
      }
      else if (iVar3 == 0x1c1511f) {
LAB_0002e910:
        iVar3 = -0x207dc979;
      }
    }
    if (iVar3 == 0x1b0c3832) goto LAB_0002e910;
    if (iVar3 == 0x358227cb) {
      local_18 = (undefined8 *)(local_20 + local_28);
      iVar3 = -0x3d5da93c;
    }
    else if (iVar3 == 0x73cbebb9) {
      iVar3 = 0x358227cb;
    }
  } while( true );
}



// Function Stack Size: 0x10 bytes

ID SettingViewControllernn::m2bView(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar1 = 0x5c72b7d4;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 = iVar1, 0x1bbfc3a3 < iVar4) {
          iVar2 = -0x167cdd32;
          if (iVar4 != 0x74870ab1) {
            iVar2 = iVar4;
          }
          iVar1 = -0x6efd7e84;
          if (iVar4 != 0x706eb47f) {
            iVar1 = iVar2;
          }
          iVar2 = 0x7b9d7b5;
          if (iVar4 != 0x5c72b7d4) {
            iVar2 = iVar4;
          }
          iVar3 = 0x7b9d7b5;
          if (iVar4 != 0x1bbfc3a4) {
            iVar3 = iVar2;
          }
          if (iVar4 < 0x706eb47f) {
            iVar1 = iVar3;
          }
        }
        if (-0x167cdd33 < iVar4) break;
        if (iVar4 == -0x6efd7e84) {
          local_10 = (long)_m2bView;
          iVar1 = 0x74870ab1;
          local_8 = param_1;
        }
        else {
          iVar1 = 0x706eb47f;
          if (iVar4 != -0x419068bf) {
            iVar1 = iVar4;
          }
        }
      }
      if (iVar4 != 0x7b9d7b5) break;
      iVar1 = -0x419068bf;
    }
    iVar1 = iVar4;
  } while (iVar4 != -0x167cdd32);
  return *(ID *)(local_8 + local_10);
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::setM2bView_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar1 = 0x1ab70561;
  while (iVar1 != 0x36e2727a) {
    if (iVar1 == 0x1ab70561) {
      local_20 = (long)_m2bView;
      iVar1 = 0x36e2727a;
      local_18 = param_1;
    }
  }
  _objc_storeStrong(local_18 + local_20,param_3);
  return;
}



// Function Stack Size: 0x10 bytes

ID SettingViewControllernn::m000bView(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_8;
  
  iVar2 = -0x30fb846;
  do {
    while( true ) {
      while (iVar3 = iVar2, -0x30fb847 < iVar3) {
        if (iVar3 < 0x634b4e70) {
          iVar1 = 0x634b4e70;
          if (iVar3 != 0x2ccaae8) {
            iVar1 = iVar3;
          }
          iVar2 = 0x2ccaae8;
          if (iVar3 != -0x30fb846) {
            iVar2 = iVar1;
          }
        }
        else if (iVar3 == 0x634b4e70) {
          iVar2 = -0x1347aaf9;
        }
        else {
          iVar2 = iVar3;
          if (iVar3 == 0x66ab4621) {
            local_8 = (ID *)(param_1 + (long)_m000bView);
            iVar2 = -0x635666c0;
          }
        }
      }
      if (-0x222c7fae < iVar3) break;
      iVar1 = 0x2ccaae8;
      if (iVar3 != -0x4299f6f3) {
        iVar1 = iVar3;
      }
      iVar2 = -0x222c7fad;
      if (iVar3 != -0x635666c0) {
        iVar2 = iVar1;
      }
    }
    iVar2 = 0x66ab4621;
  } while (((iVar3 == -0x1ff4f3e1) || (iVar2 = 0x66ab4621, iVar3 == -0x1347aaf9)) ||
          (iVar2 = iVar3, iVar3 != -0x222c7fad));
  return *local_8;
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::setM000bView_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int iVar4;
  ID *local_40;
  ID local_38;
  
  iVar2 = 0x762dac5;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar4 = iVar2, 0x4ba5ee1 < iVar4) {
            if (iVar4 < 0x18a1b52b) {
              if (iVar4 == 0x4ba5ee2) {
                iVar2 = 0x1ba6616e;
              }
              else {
                iVar2 = 0x18a1b52b;
                if ((iVar4 != 0x762dac5) && (iVar2 = iVar4, iVar4 == 0x17bc7f76)) {
                  local_38 = param_3;
                  iVar2 = -0x2b35a7be;
                }
              }
            }
            else if (iVar4 == 0x18a1b52b) {
              local_40 = (ID *)(param_1 + (long)_m000bView);
              iVar2 = 0x4ba5ee2;
            }
            else {
              iVar1 = -0x2d745f6c;
              if (iVar4 != 0x67e70b8b) {
                iVar1 = iVar4;
              }
              iVar2 = 0x17bc7f76;
              if (iVar4 != 0x1ba6616e) {
                iVar2 = iVar1;
              }
            }
          }
          if (iVar4 < -0x2b35a7be) break;
          if (iVar4 == -0x2b35a7be) {
            iVar2 = 0x67e70b8b;
          }
          else {
            iVar2 = 0x18a1b52b;
            if ((iVar4 != -0x1d87ae05) && (iVar2 = iVar4, iVar4 == -0x5b8c158)) {
              _objc_retain(local_38,param_2);
              IVar3 = *local_40;
              *local_40 = param_3;
              _objc_release(IVar3);
              param_2 = extraout_x1;
              iVar2 = -0x2d745f6c;
            }
          }
        }
        iVar2 = 0x17bc7f76;
      } while (iVar4 == -0x2ee2f68f);
      if (iVar4 != -0x2d745f6c) break;
      _objc_retain(local_38,param_2);
      IVar3 = *local_40;
      *local_40 = param_3;
      _objc_release(IVar3);
      param_2 = extraout_x1_00;
      iVar2 = -0x4de05d02;
    }
    iVar2 = iVar4;
  } while (iVar4 != -0x4de05d02);
  return;
}



// Function Stack Size: 0x10 bytes

ID SettingViewControllernn::m5xbViewclean(ID param_1,SEL param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar1 = 0x51d66de1;
  while( true ) {
    while( true ) {
      while (iVar1 < -0xc885fc6) {
        if (iVar1 == -0x7c5ec42b) {
          iVar1 = 0xf2fa7bf;
        }
        else if (iVar1 == -0x202c43f1) {
          local_8 = *local_10;
          iVar1 = 0x3caf11da;
        }
        else if (iVar1 == -0x1ae42efb) {
          local_14 = _m5xbViewclean;
          iVar1 = -0x7c5ec42b;
        }
      }
      if (0x3caf11d9 < iVar1) break;
      if (iVar1 == -0xc885fc6) {
        iVar1 = -0x202c43f1;
      }
      else if (iVar1 == 0xf2fa7bf) {
        local_10 = (ID *)(param_1 + (long)local_14);
        iVar1 = -0xc885fc6;
      }
    }
    if (iVar1 == 0x3caf11da) break;
    if (iVar1 == 0x51d66de1) {
      iVar1 = -0x1ae42efb;
    }
  }
  return local_8;
}



// Function Stack Size: 0x18 bytes

void SettingViewControllernn::setM5xbViewclean_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  iVar1 = -0x71f825a8;
  do {
    do {
      while( true ) {
        while (iVar2 = iVar1, -0x429e0f7e < iVar2) {
          if (iVar2 < 0x53a9fa24) {
            if (iVar2 == -0x429e0f7d) {
              iVar1 = -0x4797fb54;
            }
            else {
              iVar1 = -0x6317bae5;
              if ((iVar2 != -0x408efe5a) && (iVar1 = iVar2, iVar2 == 0x40d00751)) {
                local_30 = (long)_m5xbViewclean;
                iVar1 = -0x429e0f7d;
              }
            }
          }
          else if (iVar2 == 0x53a9fa24) {
            iVar1 = -0x68c0e5bf;
          }
          else if (iVar2 == 0x67ef0260) {
            _objc_storeStrong(local_28 + local_30,param_3);
            iVar1 = 0x70efe3f6;
          }
          else {
            iVar1 = iVar2;
            if (iVar2 == 0x70efe3f6) {
              _objc_storeStrong(local_28 + local_30,param_3);
              iVar1 = -0x4ad09cf9;
            }
          }
        }
        if (-0x5b24c488 < iVar2) break;
        iVar1 = 0x40d00751;
        if (iVar2 != -0x71f825a8) {
          iVar1 = 0x70efe3f6;
          if ((iVar2 != -0x68c0e5bf) && (iVar1 = iVar2, iVar2 == -0x6317bae5)) {
            iVar1 = 0x53a9fa24;
            local_28 = param_1;
          }
        }
      }
      iVar1 = 0x40d00751;
    } while (iVar2 == -0x5b24c487);
    iVar1 = -0x6317bae5;
  } while ((iVar2 == -0x4797fb54) || (iVar1 = iVar2, iVar2 != -0x4ad09cf9));
  return;
}
