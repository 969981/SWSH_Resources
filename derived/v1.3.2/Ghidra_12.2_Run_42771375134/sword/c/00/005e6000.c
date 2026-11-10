/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e6000; name: FUN_005e6000
 */


undefined8 FUN_005e6000(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_80 [40];
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  
  plVar1 = (long *)FUN_0067d0e0();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x48))(plVar1,param_2,9,0);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  local_58 = 0;
  local_50 = 0;
  uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,auStack_80,0x40,1);
  if (((((uVar2 & 1) == 0) ||
       (lVar3 = FUN_005c56e0(auStack_80,"SSKK.ShaderVariationList",1), lVar3 != 0)) ||
      ((int)local_58 != 3)) ||
     (((local_58._4_4_ != 0 || ((int)local_50 != 0)) || (local_50._4_4_ != 1)))) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    return 0;
  }
  if (*(ulong *)(param_3 + 0x18) < (ulong)(long)local_48) {
    uVar2 = FUN_005e7cf0(param_3,(long)local_48,1);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
    else {
      uVar2 = *(ulong *)(param_3 + 0x18);
      uVar5 = *(ulong *)(param_3 + 0x10);
      if (uVar2 < *(ulong *)(param_3 + 0x10)) {
        *(ulong *)(param_3 + 0x10) = uVar2;
        uVar5 = uVar2;
      }
      if (uVar5 != 0) {
        *(long *)(param_3 + 0x30) = *(long *)(param_3 + 0x28);
        *(ulong *)(param_3 + 0x38) = *(long *)(param_3 + 0x28) + uVar5 * 8;
        goto LAB_005e612c;
      }
    }
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
  }
LAB_005e612c:
  if (0 < local_48) {
    iVar6 = 0;
    do {
      while( true ) {
        while( true ) {
          plVar4 = (long *)FUN_00670d60(*(undefined8 *)(param_1 + 8));
          uVar2 = (**(code **)(*plVar4 + 0x90))(plVar4,plVar1,local_44);
          if ((uVar2 & 1) != 0) break;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
          iVar6 = iVar6 + 1;
          if (local_48 <= iVar6) goto LAB_005e6220;
        }
        uVar2 = *(ulong *)(param_3 + 0x10);
        uVar5 = *(ulong *)(param_3 + 0x18);
        if (uVar5 <= uVar2) break;
LAB_005e61d4:
        *(long **)(*(long *)(param_3 + 0x28) + uVar2 * 8) = plVar4;
        lVar3 = *(long *)(param_3 + 0x10) + 1;
        *(long *)(param_3 + 0x10) = lVar3;
        *(long *)(param_3 + 0x30) = *(long *)(param_3 + 0x28);
        *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x28) + lVar3 * 8;
        iVar6 = iVar6 + 1;
        if (local_48 <= iVar6) goto LAB_005e6220;
      }
      if (*(long *)(param_3 + 0x40) == 0) {
        lVar3 = uVar5 * 2;
        if (lVar3 == 0) {
          lVar3 = 1;
        }
        uVar2 = FUN_005e7cf0(param_3,lVar3,1);
      }
      else {
        uVar2 = FUN_005e7cf0(param_3,*(long *)(param_3 + 0x40) + uVar5,1);
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(param_3 + 0x10);
        goto LAB_005e61d4;
      }
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x30) = 0;
      *(undefined8 *)(param_3 + 0x38) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
LAB_005e6220:
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return 1;
}


