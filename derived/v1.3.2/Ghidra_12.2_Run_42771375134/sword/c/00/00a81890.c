/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a81890; name: FUN_00a81890
 */


void FUN_00a81890(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                 uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  float fVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_54;
  
  uVar5 = 0;
  iVar7 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_3[1] = 0;
  *param_3 = 0;
  do {
    uVar4 = (**(code **)(*param_1 + 0x898))(param_1,uVar5 & 0xffffffff);
    if ((uVar4 & 1) != 0) {
      plVar6 = (long *)param_1[uVar5 + 0xa9];
      if (plVar6 == (long *)0x0) {
LAB_00a819a8:
        uVar2 = (**(code **)(*param_1 + 0x748))(param_1,param_4);
        uVar3 = (**(code **)(*param_1 + 0x748))(param_1,uVar5 & 0xffffffff);
        if (((uVar2 ^ uVar3 ^ param_5) & 1) != 0) {
          local_70 = 0;
          uStack_68 = 0;
          FUN_00a67970(param_1,uVar5 & 0xffffffff,&local_70,&local_54);
          iVar7 = iVar7 + 1;
          param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) +
                                (float)((ulong)uStack_68 >> 0x20),
                                (float)param_2[1] + (float)uStack_68);
          *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)local_70 >> 0x20),
                              (float)*param_2 + (float)local_70);
        }
        if (plVar6 == (long *)0x0) goto LAB_00a81a24;
      }
      else {
        (**(code **)(plVar6[9] + 0x10))(plVar6 + 9);
        bVar1 = (**(code **)(*plVar6 + 0x218))(plVar6);
        if (bVar1 < 3) goto LAB_00a819a8;
        uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
        if ((uVar4 & 1) != 0) {
          uVar2 = (**(code **)(*param_1 + 0x748))(param_1,param_4);
          uVar3 = (**(code **)(*param_1 + 0x748))(param_1,uVar5 & 0xffffffff);
          if (((uVar2 ^ uVar3 ^ param_5) & 1) != 0) {
            local_70 = 0;
            uStack_68 = 0;
            FUN_00a67970(param_1,uVar5 & 0xffffffff,&local_70,&local_54);
            iVar7 = iVar7 + 1;
            param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) +
                                  (float)((ulong)uStack_68 >> 0x20),
                                  (float)param_2[1] + (float)uStack_68);
            *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)local_70 >> 0x20),
                                (float)*param_2 + (float)local_70);
          }
        }
      }
      (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
    }
LAB_00a81a24:
    uVar5 = uVar5 + 1;
    if (uVar5 == 7) {
      if (1 < iVar7) {
        fVar8 = (float)iVar7;
        param_2[1] = (ulong)(uint)((float)param_2[1] / fVar8);
        *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) / fVar8,(float)*param_2 / fVar8);
      }
      local_70 = 0;
      uStack_68 = 0;
      FUN_00a67970(param_1,param_4,&local_70,&local_54);
      if ((param_5 & 1) == 0) {
        local_54 = (local_54 + 0xb4) % 0x168;
      }
      param_3[1] = param_3[1];
      *param_3 = CONCAT44((float)local_54,(int)*param_3);
      return;
    }
  } while( true );
}


