/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ac720; name: FUN_009ac720
 */


void FUN_009ac720(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_50 [8];
  uint local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined1 local_38 [8];
  
  if (*(char *)(*param_3 + 0x59) == '\0') {
    *(undefined1 *)(*param_3 + 0x59) = 1;
    uVar4 = FUN_00942380();
    uVar5 = FUN_008f35c0(uVar4,0x4000);
    if ((uVar5 & 1) != 0) {
      cVar1 = FUN_009425b0(param_1,*(undefined8 *)*param_3);
      if (cVar1 == '\x01') {
        iVar3 = FUN_00942820(param_1,0);
        if (iVar3 == 2) {
          uVar4 = FUN_009423b0(param_1);
          uVar6 = 0xd0;
        }
        else if (iVar3 == 1) {
          uVar4 = FUN_009423b0(param_1);
          uVar6 = 0xcf;
        }
        else {
          if (iVar3 != 0) {
            return;
          }
          uVar4 = FUN_009423b0(param_1);
          uVar6 = 0xce;
        }
        FUN_0093a170(uVar4,1,0,uVar6);
        return;
      }
    }
    plVar7 = (long *)*param_3;
    if ((int)plVar7[1] == 7) {
      uStack_44 = *(undefined4 *)((long)plVar7 + 0x24);
      local_48 = (uint)*(byte *)(plVar7 + 0xb);
      FUN_00942450(param_1);
      uVar4 = FUN_00925230();
      FUN_0099bc20(uVar4,auStack_50,&local_48);
    }
    else if ((*plVar7 != 0) && (uVar5 = FUN_008e1600(), (uVar5 & 1) == 0)) {
      FUN_00942390(param_1);
      uVar4 = FUN_009319a0();
      uVar2 = FUN_008e0a00(*(undefined8 *)*param_3);
      uVar5 = FUN_00913dd0(uVar4,uVar2);
      if ((uVar5 & 1) != 0) {
        puVar8 = (undefined8 *)*param_3;
        uVar5 = FUN_008e1810(*puVar8,0x22);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(puVar8 + 1) != 4) {
LAB_009ac94c:
            puVar8 = (undefined8 *)*param_3;
            cVar1 = FUN_008e2ef0(*puVar8,3);
            if (cVar1 != '\0') {
              uVar4 = FUN_009423b0(param_1);
              FUN_00937710(uVar4,*puVar8,3,0);
            }
            uVar4 = FUN_009423e0(param_1);
            FUN_009294a0(uVar4,puVar8);
            return;
          }
          FUN_00942380(param_1);
          iVar3 = FUN_008f8b90();
          if (iVar3 != 2) goto LAB_009ac94c;
        }
        local_38[0] = FUN_008e0a00(*(undefined8 *)*param_3);
        FUN_00942450(param_1);
        uVar4 = FUN_00925ac0();
        FUN_009accc0(uVar4,auStack_40,local_38);
        puVar8 = (undefined8 *)*param_3;
        if ((*(byte *)(puVar8 + 5) & 0x18) != 0) {
          uVar4 = FUN_009423b0(param_1);
          uVar2 = FUN_008e0a00(*puVar8);
          FUN_00938eb0(uVar4,uVar2,*(undefined1 *)((long)puVar8 + 0x2c),puVar8 + 6);
          puVar8 = (undefined8 *)*param_3;
        }
        uVar4 = FUN_009423e0(param_1);
        FUN_009293a0(uVar4,puVar8);
        FUN_008e3830(*(undefined8 *)*param_3,0);
        FUN_009aca20(param_1,*param_3);
        if (*(int *)((undefined8 *)*param_3 + 1) - 1U < 2) {
          FUN_008e3830(*(undefined8 *)*param_3,1);
          uVar4 = FUN_009423b0(param_1);
          FUN_009375c0(uVar4,*(undefined8 *)*param_3,0);
        }
        FUN_009423f0(param_1);
        uVar4 = FUN_00942fe0();
        uVar5 = FUN_00943290(uVar4,5);
        if ((uVar5 & 1) == 0) {
          puVar8 = (undefined8 *)*param_3;
          uVar4 = FUN_009423e0(param_1);
          FUN_00929430(uVar4,*puVar8,*(undefined4 *)(puVar8 + 1));
        }
      }
    }
  }
  return;
}


