/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc0c50; name: FUN_00cc0c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cc0c50(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 uVar11;
  long local_58 [3];
  long local_40;
  long local_38;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar8 == 0) {
    FUN_00c58c20(&local_38,0);
    uVar9 = _DAT_00001588;
  }
  else {
    plVar10 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_00c58c20(&local_38,lVar8);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    uVar9 = _DAT_00001588;
  }
  _DAT_00001588 = uVar9;
  if (local_38 == 0) {
    local_58[0] = 0;
  }
  else {
    FUN_00c62ba0(local_58);
    uVar9 = *(undefined8 *)(&DAT_00001588 + local_58[0]);
    if (local_58[0] != 0) {
      (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
      local_58[0] = 0;
    }
  }
  lVar8 = FUN_00cbf680(uVar9);
  puVar4 = *(uint **)(*(long *)(lVar8 + 0x68) + 400);
  piVar2 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar4 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  uVar5 = (ulong)*puVar4;
  if (uVar5 != 0) {
    lVar8 = 0;
    do {
      uVar6 = (ulong)*(uint *)((long)puVar4 + lVar8 + 4);
      lVar3 = lVar8 + (uVar6 - (long)*(int *)((long)puVar4 + lVar8 + uVar6 + 4));
      if ((*(ushort *)((long)puVar4 + lVar3 + 4) < 5) ||
         (uVar7 = (ulong)*(ushort *)((long)puVar4 + lVar3 + 8), uVar7 == 0)) {
        if (*param_2 == 0) goto LAB_00cc0db0;
      }
      else if (*(long *)((long)puVar4 + lVar8 + uVar6 + uVar7 + 4) == *param_2) {
LAB_00cc0db0:
        puVar1 = (uint *)((long)puVar4 + lVar8 + 4);
        if ((puVar1 != puVar4 + uVar5 + 1) &&
           (piVar2 = (int *)((long)puVar1 + (ulong)*puVar1), piVar2 != (int *)0x0)) {
          uVar9 = *param_1;
          FUN_006cf0a0(local_58,PTR_DAT_02716510);
          uVar11 = 0;
          if ((6 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar5 != 0)) {
            uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
          }
          FUN_01053350(uVar11,uVar9,local_58);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          uVar9 = *param_1;
          FUN_006cf0a0(local_58,PTR_DAT_02716518);
          uVar11 = 0;
          if ((8 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar5 != 0)) {
            uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
          }
          FUN_01053350(uVar11,uVar9,local_58);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          uVar9 = *param_1;
          FUN_006cf0a0(local_58,PTR_DAT_02716528);
          uVar11 = 0;
          if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar5 != 0)) {
            uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
          }
          FUN_01053350(uVar11,uVar9,local_58);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          uVar9 = *param_1;
          FUN_006cf0a0(local_58,PTR_DAT_02716530);
          uVar11 = 0;
          if ((0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar5 != 0)) {
            uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
          }
          FUN_01053350(uVar11,uVar9,local_58);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          uVar9 = *param_1;
          FUN_006cf0a0(local_58,PTR_DAT_02716538);
          uVar11 = 0;
          if ((0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar5 != 0)) {
            uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
          }
          FUN_01053350(uVar11,uVar9,local_58);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          uVar9 = *param_1;
          FUN_006cf0a0(local_58,PTR_DAT_02716540);
          uVar11 = 0;
          if ((0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar5 != 0)) {
            uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
          }
          FUN_01053350(uVar11,uVar9,local_58);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          uVar9 = *param_1;
          FUN_006cf0a0(local_58,PTR_DAT_02716520);
          uVar11 = 0;
          if ((0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar5 != 0)) {
            uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
          }
          FUN_01053350(uVar11,uVar9,local_58);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
            if (local_38 == 0) {
              return;
            }
            goto LAB_00cc1074;
          }
        }
        break;
      }
      lVar8 = lVar8 + 4;
    } while (uVar5 * 4 != lVar8);
  }
  if (local_38 != 0) {
LAB_00cc1074:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


