/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00607330; name: FUN_00607330
 */


void FUN_00607330(long *param_1,long param_2,char *param_3,undefined8 *param_4,long param_5,
                 undefined4 *param_6)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  
  *param_4 = 0;
  if (param_2 == 0) {
    *param_4 = 0;
    *param_6 = 0x51;
    param_4[1] = 0;
    param_6[1] = 0x51;
    param_4[2] = 0;
    param_6[2] = 0;
    lVar13 = *param_1;
    lVar6 = FUN_0060abc0(lVar13,param_3,&DAT_01d107b4);
    if (lVar6 == 0) {
      iVar5 = 0x40;
    }
    else {
      lVar12 = *param_1;
      puVar10 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x50);
      if (puVar10 == (undefined8 *)0x0) {
        iVar5 = 0x40;
      }
      else {
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[6] = 0;
        puVar10[7] = lVar12;
        iVar5 = FUN_0060acc0(puVar10,lVar6);
        puVar10[4] = lVar6;
        if (iVar5 == 0) {
          puVar10[7] = lVar12;
          iVar5 = FUN_0060a890(puVar10,0x51607,param_5 + 0x10);
          lVar12 = puVar10[7];
          if ((code *)puVar10[6] != (code *)0x0) {
            (*(code *)puVar10[6])(puVar10);
          }
          (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
          if (iVar5 == 0) {
            param_4[2] = lVar6;
            goto LAB_00607718;
          }
        }
        else {
          (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
        }
      }
      (**(code **)(lVar13 + 0x10))(lVar13,lVar6);
    }
LAB_00607718:
    param_6[2] = iVar5;
    param_4[3] = 0;
    param_6[3] = 0;
    pcVar7 = (char *)strlen(param_3);
    if ((long)pcVar7 < 0x7fffffee) {
      pcVar1 = pcVar7 + 0x12;
      if ((long)pcVar7 < -0x11) {
        if (pcVar1 == (char *)0x0) {
          memcpy((void *)0x0,param_3,(size_t)pcVar7);
          pcVar7[0x10] = 'c';
          uVar3 = s____namedfork_rsrc_01d2c3eb._8_8_;
          pcVar7[0x11] = '\0';
          uVar4 = 0;
          *(undefined8 *)pcVar7 = s____namedfork_rsrc_01d2c3eb._0_8_;
          *(undefined8 *)(pcVar7 + 8) = uVar3;
          param_4[3] = 0;
          *(undefined8 *)(param_5 + 0x18) = 0;
        }
        else {
          uVar4 = 6;
        }
      }
      else {
        pvVar9 = (void *)(**(code **)(*param_1 + 8))(*param_1,pcVar1);
        if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(pvVar9,0,(size_t)pcVar1);
        }
        uVar4 = 0x40;
      }
    }
    else {
      uVar4 = 10;
    }
    param_6[3] = uVar4;
    param_4[4] = 0;
    param_6[4] = 0;
    puVar8 = (undefined4 *)strlen(param_3);
    if ((long)puVar8 < 0x7ffffffa) {
      sVar2 = (long)puVar8 + 6;
      if ((long)puVar8 < -5) {
        if (sVar2 == 0) {
          memcpy((void *)0x0,param_3,(size_t)puVar8);
          *(undefined2 *)(puVar8 + 1) = 99;
          *puVar8 = 0x7273722f;
          param_4[4] = 0;
          uVar4 = 0;
          *(undefined8 *)(param_5 + 0x20) = 0;
        }
        else {
          uVar4 = 6;
        }
      }
      else {
        pvVar9 = (void *)(**(code **)(*param_1 + 8))(*param_1,sVar2);
        if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(pvVar9,0,sVar2);
        }
        uVar4 = 0x40;
      }
    }
    else {
      uVar4 = 10;
    }
    param_6[4] = uVar4;
    param_4[5] = 0;
    param_6[5] = 0;
    lVar6 = FUN_0060abc0(*param_1,param_3,"resource.frk/");
    if (lVar6 == 0) {
      uVar4 = 0x40;
    }
    else {
      uVar4 = 0;
      param_4[5] = lVar6;
      *(undefined8 *)(param_5 + 0x28) = 0;
    }
    param_6[5] = uVar4;
    param_4[6] = 0;
    param_6[6] = 0;
    lVar6 = FUN_0060abc0(*param_1,param_3,".resource/");
    if (lVar6 == 0) {
      uVar4 = 0x40;
    }
    else {
      uVar4 = 0;
      param_4[6] = lVar6;
      *(undefined8 *)(param_5 + 0x30) = 0;
    }
    param_6[6] = uVar4;
    param_4[7] = 0;
    param_6[7] = 0;
    lVar13 = *param_1;
    lVar6 = FUN_0060abc0(lVar13,param_3,&DAT_01d477c1);
    if (lVar6 == 0) {
      iVar5 = 0x40;
    }
    else {
      lVar12 = *param_1;
      puVar10 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x50);
      if (puVar10 == (undefined8 *)0x0) {
        iVar5 = 0x40;
      }
      else {
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[6] = 0;
        puVar10[7] = lVar12;
        iVar5 = FUN_0060acc0(puVar10,lVar6);
        puVar10[4] = lVar6;
        if (iVar5 == 0) {
          puVar10[7] = lVar12;
          iVar5 = FUN_0060a890(puVar10,0x51607,param_5 + 0x38);
          lVar12 = puVar10[7];
          if ((code *)puVar10[6] != (code *)0x0) {
            (*(code *)puVar10[6])(puVar10);
          }
          (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
          if (iVar5 == 0) {
            param_4[7] = lVar6;
            goto LAB_00607dcc;
          }
        }
        else {
          (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
        }
      }
      (**(code **)(lVar13 + 0x10))(lVar13,lVar6);
    }
LAB_00607dcc:
    param_6[7] = iVar5;
    param_4[8] = 0;
    param_6[8] = 0;
    lVar13 = *param_1;
    lVar6 = FUN_0060abc0(lVar13,param_3,".AppleDouble/");
    if (lVar6 == 0) goto LAB_00607f40;
    lVar12 = *param_1;
    puVar10 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x50);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[6] = 0;
      puVar10[7] = lVar12;
      iVar5 = FUN_0060acc0(puVar10,lVar6);
      puVar10[4] = lVar6;
      if (iVar5 != 0) {
        (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
        goto LAB_00607e98;
      }
      puVar10[7] = lVar12;
      iVar5 = FUN_0060a890(puVar10,0x51607,param_5 + 0x40);
      lVar12 = puVar10[7];
      if ((code *)puVar10[6] != (code *)0x0) {
        (*(code *)puVar10[6])(puVar10);
      }
      (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
      if (iVar5 != 0) goto LAB_00607e98;
LAB_00607fc8:
      param_4[8] = lVar6;
      goto LAB_00607fa4;
    }
    iVar5 = 0x40;
LAB_00607e98:
    pcVar11 = *(code **)(lVar13 + 0x10);
  }
  else {
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar6 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar6 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *param_6 = 0;
      *param_4 = 0;
      uVar4 = FUN_0060a890(param_2,0x51607,param_5);
      *param_6 = uVar4;
      param_4[1] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 != (code *)0x0) goto LAB_006073dc;
LAB_0060740c:
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[1] = 0;
      param_4[1] = 0;
      uVar4 = FUN_0060a890(param_2,0x51600,param_5 + 8);
      param_6[1] = uVar4;
      param_4[2] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 == (code *)0x0) goto LAB_00607464;
LAB_00607440:
      lVar6 = (*pcVar11)(param_2,0,0,0);
      if (lVar6 == 0) goto LAB_00607464;
      param_6[2] = 0x55;
    }
    else {
      *param_6 = 0x55;
      param_4[1] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 == (code *)0x0) goto LAB_0060740c;
LAB_006073dc:
      lVar6 = (*pcVar11)(param_2,0,0,0);
      if (lVar6 == 0) goto LAB_0060740c;
      param_6[1] = 0x55;
      param_4[2] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 != (code *)0x0) goto LAB_00607440;
LAB_00607464:
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[2] = 0;
      lVar13 = *param_1;
      lVar6 = FUN_0060abc0(lVar13,param_3,&DAT_01d107b4);
      if (lVar6 == 0) {
        iVar5 = 0x40;
      }
      else {
        lVar12 = *param_1;
        puVar10 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x50);
        if (puVar10 == (undefined8 *)0x0) {
          iVar5 = 0x40;
        }
        else {
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[6] = 0;
          puVar10[7] = lVar12;
          iVar5 = FUN_0060acc0(puVar10,lVar6);
          puVar10[4] = lVar6;
          if (iVar5 == 0) {
            puVar10[7] = lVar12;
            iVar5 = FUN_0060a890(puVar10,0x51607,param_5 + 0x10);
            lVar12 = puVar10[7];
            if ((code *)puVar10[6] != (code *)0x0) {
              (*(code *)puVar10[6])(puVar10);
            }
            (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
            if (iVar5 == 0) {
              param_4[2] = lVar6;
              goto LAB_006075a0;
            }
          }
          else {
            (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
          }
        }
        (**(code **)(lVar13 + 0x10))(lVar13,lVar6);
      }
LAB_006075a0:
      param_6[2] = iVar5;
    }
    param_4[3] = 0;
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar6 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar6 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[3] = 0;
      pcVar7 = (char *)strlen(param_3);
      if (0x7fffffed < (long)pcVar7) {
        param_6[3] = 10;
        param_4[4] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x0060779c;
      }
      pcVar1 = pcVar7 + 0x12;
      if (-0x12 < (long)pcVar7) {
        pvVar9 = (void *)(**(code **)(*param_1 + 8))(*param_1,pcVar1);
        if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(pvVar9,0,(size_t)pcVar1);
        }
        param_6[3] = 0x40;
        param_4[4] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x0060779c;
      }
      if (pcVar1 == (char *)0x0) {
        memcpy((void *)0x0,param_3,(size_t)pcVar7);
        pcVar7[0x10] = 'c';
        uVar3 = s____namedfork_rsrc_01d2c3eb._8_8_;
        pcVar7[0x11] = '\0';
        *(undefined8 *)pcVar7 = s____namedfork_rsrc_01d2c3eb._0_8_;
        *(undefined8 *)(pcVar7 + 8) = uVar3;
        param_4[3] = 0;
        *(undefined8 *)(param_5 + 0x18) = 0;
        param_6[3] = 0;
        param_4[4] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x0060779c;
      }
      param_6[3] = 6;
      param_4[4] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 != (code *)0x0) goto LAB_006077f4;
LAB_00607824:
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[4] = 0;
      puVar8 = (undefined4 *)strlen(param_3);
      if (0x7ffffff9 < (long)puVar8) {
        param_6[4] = 10;
        param_4[5] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x00607978;
      }
      sVar2 = (long)puVar8 + 6;
      if (-6 < (long)puVar8) {
        pvVar9 = (void *)(**(code **)(*param_1 + 8))(*param_1,sVar2);
        if (pvVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(pvVar9,0,sVar2);
        }
        param_6[4] = 0x40;
        param_4[5] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x00607978;
      }
      if (sVar2 == 0) {
        memcpy((void *)0x0,param_3,(size_t)puVar8);
        *(undefined2 *)(puVar8 + 1) = 99;
        *puVar8 = 0x7273722f;
        param_4[4] = 0;
        *(undefined8 *)(param_5 + 0x20) = 0;
        param_6[4] = 0;
        param_4[5] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x00607978;
      }
      param_6[4] = 6;
      param_4[5] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 != (code *)0x0) goto LAB_006079cc;
LAB_006079fc:
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[5] = 0;
      lVar6 = FUN_0060abc0(*param_1,param_3,"resource.frk/");
      if (lVar6 == 0) {
        param_6[5] = 0x40;
        param_4[6] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x00607a4c;
      }
      param_4[5] = lVar6;
      *(undefined8 *)(param_5 + 0x28) = 0;
      param_6[5] = 0;
      param_4[6] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 != (code *)0x0) goto LAB_00607a50;
LAB_00607a80:
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[6] = 0;
      lVar6 = FUN_0060abc0(*param_1,param_3,".resource/");
      if (lVar6 == 0) {
        param_6[6] = 0x40;
        param_4[7] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
        goto joined_r0x00607a78;
      }
      param_4[6] = lVar6;
      *(undefined8 *)(param_5 + 0x30) = 0;
      param_6[6] = 0;
      param_4[7] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
      if (pcVar11 != (code *)0x0) goto LAB_00607ad4;
LAB_00607b04:
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[7] = 0;
      lVar13 = *param_1;
      lVar6 = FUN_0060abc0(lVar13,param_3,&DAT_01d477c1);
      if (lVar6 == 0) {
        param_6[7] = 0x40;
        param_4[8] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
      }
      else {
        lVar12 = *param_1;
        puVar10 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x50);
        if (puVar10 == (undefined8 *)0x0) {
          iVar5 = 0x40;
        }
        else {
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[6] = 0;
          puVar10[7] = lVar12;
          iVar5 = FUN_0060acc0(puVar10,lVar6);
          puVar10[4] = lVar6;
          if (iVar5 == 0) {
            puVar10[7] = lVar12;
            iVar5 = FUN_0060a890(puVar10,0x51607,param_5 + 0x38);
            lVar12 = puVar10[7];
            if ((code *)puVar10[6] != (code *)0x0) {
              (*(code *)puVar10[6])(puVar10);
            }
            (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
            if (iVar5 == 0) {
              param_4[7] = lVar6;
              param_6[7] = 0;
              param_4[8] = 0;
              pcVar11 = *(code **)(param_2 + 0x28);
              goto joined_r0x00607b94;
            }
          }
          else {
            (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
          }
        }
        (**(code **)(lVar13 + 0x10))(lVar13,lVar6);
        param_6[7] = iVar5;
        param_4[8] = 0;
        pcVar11 = *(code **)(param_2 + 0x28);
      }
    }
    else {
      param_6[3] = 0x55;
      param_4[4] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
joined_r0x0060779c:
      if (pcVar11 == (code *)0x0) goto LAB_00607824;
LAB_006077f4:
      lVar6 = (*pcVar11)(param_2,0,0,0);
      if (lVar6 == 0) goto LAB_00607824;
      param_6[4] = 0x55;
      param_4[5] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
joined_r0x00607978:
      if (pcVar11 == (code *)0x0) goto LAB_006079fc;
LAB_006079cc:
      lVar6 = (*pcVar11)(param_2,0,0,0);
      if (lVar6 == 0) goto LAB_006079fc;
      param_6[5] = 0x55;
      param_4[6] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
joined_r0x00607a4c:
      if (pcVar11 == (code *)0x0) goto LAB_00607a80;
LAB_00607a50:
      lVar6 = (*pcVar11)(param_2,0,0,0);
      if (lVar6 == 0) goto LAB_00607a80;
      param_6[6] = 0x55;
      param_4[7] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
joined_r0x00607a78:
      if (pcVar11 == (code *)0x0) goto LAB_00607b04;
LAB_00607ad4:
      lVar6 = (*pcVar11)(param_2,0,0,0);
      if (lVar6 == 0) goto LAB_00607b04;
      param_6[7] = 0x55;
      param_4[8] = 0;
      pcVar11 = *(code **)(param_2 + 0x28);
    }
joined_r0x00607b94:
    if ((pcVar11 != (code *)0x0) && (lVar6 = (*pcVar11)(param_2,0,0,0), lVar6 != 0)) {
      param_6[8] = 0x55;
      return;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_6[8] = 0;
    lVar13 = *param_1;
    lVar6 = FUN_0060abc0(lVar13,param_3,".AppleDouble/");
    if (lVar6 == 0) {
LAB_00607f40:
      iVar5 = 0x40;
      goto LAB_00607fa4;
    }
    lVar12 = *param_1;
    puVar10 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x50);
    if (puVar10 == (undefined8 *)0x0) {
      iVar5 = 0x40;
    }
    else {
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[6] = 0;
      puVar10[7] = lVar12;
      iVar5 = FUN_0060acc0(puVar10,lVar6);
      puVar10[4] = lVar6;
      if (iVar5 == 0) {
        puVar10[7] = lVar12;
        iVar5 = FUN_0060a890(puVar10,0x51607,param_5 + 0x40);
        lVar12 = puVar10[7];
        if ((code *)puVar10[6] != (code *)0x0) {
          (*(code *)puVar10[6])(puVar10);
        }
        (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
        if (iVar5 == 0) goto LAB_00607fc8;
      }
      else {
        (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
      }
    }
    pcVar11 = *(code **)(lVar13 + 0x10);
  }
  (*pcVar11)(lVar13,lVar6);
LAB_00607fa4:
  param_6[8] = iVar5;
  return;
}


