/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00948290; name: FUN_00948290
 */


void FUN_00948290(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 local_88;
  undefined1 local_87;
  
  *(undefined8 *)((long)param_2 + 5) = 0;
  *param_2 = 0;
  if (param_3[0x2a] != '\0') {
    uVar3 = FUN_009423b0(param_1);
    FUN_00938900(uVar3,*param_3);
  }
  if (param_3[0x26] != '\0') {
    uVar7 = 0;
    do {
      uVar3 = FUN_009424e0(param_1,param_3[uVar7 + 8]);
      uVar4 = FUN_008e18d0();
      if ((uVar4 & 1) != 0) {
        iVar8 = *(int *)(param_3 + 4);
LAB_0094832c:
        iVar2 = FUN_008e19f0(uVar3);
        if (iVar8 == 0x2d) {
          if (iVar2 == 0) goto LAB_00948490;
LAB_009483a4:
          iVar8 = 0;
          if (iVar2 != 0x1c) goto LAB_009483e4;
LAB_009483b4:
          uVar5 = FUN_009423e0(param_1);
          uVar4 = FUN_0092c180(uVar5,uVar3);
          if ((uVar4 & 1) != 0) goto LAB_0094832c;
        }
        else {
          if (iVar8 != 0x2f) {
            if (iVar8 == 0x2e) {
              if (iVar2 != 0) {
                iVar8 = 6;
                goto joined_r0x00948388;
              }
              iVar2 = 6;
              uVar4 = FUN_008e1810(uVar3,6);
              if ((uVar4 & 1) != 0) {
                iVar8 = 0;
                goto LAB_009483e4;
              }
            }
            else {
              uVar4 = FUN_008e1810(uVar3,iVar8);
              if (((uVar4 & 1) != 0) && (iVar2 = iVar8, iVar8 != 0)) goto LAB_009483a4;
            }
            goto LAB_00948490;
          }
          iVar2 = FUN_008ec8a0(uVar3);
          if (iVar2 == 0) goto LAB_00948490;
          iVar8 = 0x2f;
joined_r0x00948388:
          if (iVar2 == 0x1c) goto LAB_009483b4;
        }
LAB_009483e4:
        uVar5 = FUN_009423b0(param_1);
        FUN_00937f00(uVar5,uVar3,iVar2,auStack_98);
        if (param_3[0x2b] == '\0') {
          uVar1 = *(undefined2 *)(param_3 + 0x28);
          FUN_00943e60(&local_88);
          uVar4 = FUN_00948570(iVar2,auStack_98,uVar3,uVar1,&local_88);
          if ((uVar4 & 1) == 0) goto LAB_00948458;
          uVar5 = FUN_009423b0(param_1);
          puVar6 = &local_88;
        }
        else {
          uVar4 = FUN_00943f10(param_3 + 0x2c);
          if ((uVar4 & 1) == 0) goto LAB_00948458;
          uVar5 = FUN_009423b0(param_1);
          puVar6 = param_3 + 0x2c;
        }
        FUN_00935bf0(uVar5,puVar6);
LAB_00948458:
        if (iVar2 == 0x13) {
          local_88 = FUN_008e0a00(uVar3);
          local_87 = 7;
          FUN_00942450(param_1);
          uVar5 = FUN_00925140();
          FUN_00944c20(uVar5,auStack_90,&local_88);
        }
        *(undefined1 *)param_2 = 1;
        *(undefined1 *)((long)param_2 + uVar7 + 1) = 1;
        goto LAB_0094832c;
      }
LAB_00948490:
      uVar7 = uVar7 + 1;
    } while (uVar7 < (byte)param_3[0x26]);
  }
  if (param_3[0x2a] != '\0') {
    uVar3 = FUN_009423b0(param_1);
    FUN_009389c0(uVar3,*param_3);
  }
  return;
}


