/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010df6d0; name: FUN_010df6d0
 */


undefined8 FUN_010df6d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long local_29a0 [2];
  undefined2 local_2990;
  undefined1 local_298e;
  long local_38;
  
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
    FUN_010dc510(*(undefined8 *)(param_1 + 0x88),0);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      lVar4 = FUN_010c8950();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar6 = puVar6 + -10;
          goto LAB_010df758;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_010df758:
    FUN_010c6ef0(puVar6);
    goto LAB_010df99c;
  case 1:
    uVar2 = FUN_010dc3b0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        lVar4 = FUN_010c8950();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            uVar2 = FUN_010c6f20(puVar6 + -10);
            goto joined_r0x010dfad4;
          }
        }
      }
      uVar2 = FUN_010c6f20(0);
joined_r0x010dfad4:
      if ((uVar2 & 1) != 0) {
        return 0;
      }
    }
    uVar5 = 6;
    break;
  case 2:
    uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
    if (iVar1 == 1) {
      FUN_010dc4a0(*(undefined8 *)(param_1 + 0x88),0);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        lVar4 = FUN_010c8950();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) goto LAB_010dfafc;
        }
      }
      goto LAB_010dfaa0;
    }
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_010dfea0(param_1);
    uVar5 = 7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 8;
    }
    break;
  case 3:
    uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      if (*(long *)(*(long *)PTR_DAT_02710798 + 0x228) != 0) {
        (**(code **)(*(long *)(*(long *)(*(long *)PTR_DAT_02710798 + 0x228) + 0x48) + 0x10))();
      }
                    /* WARNING: Subroutine does not return */
      memset(local_29a0,0,0x2961);
    }
    FUN_010dc4a0(*(undefined8 *)(param_1 + 0x88),0);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      lVar4 = FUN_010c8950();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) goto LAB_010dfafc;
      }
    }
LAB_010dfaa0:
    puVar6 = (undefined8 *)0x0;
LAB_010dfaa4:
    FUN_010c6ea0(puVar6);
    *(undefined8 *)(param_1 + 0xa4) = 0;
    return 0;
  case 4:
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      lVar4 = FUN_010c8950();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          uVar2 = FUN_010c6d30(puVar6 + -10);
          goto joined_r0x010dfac4;
        }
      }
    }
    uVar2 = FUN_010c6d30(0);
joined_r0x010dfac4:
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x5d0) + 0x60);
    (**(code **)(*plVar3 + 8))(plVar3,0);
    FUN_00ffa290(*(undefined8 *)(param_1 + 0x90),1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    local_29a0[1] = 0;
    local_298e = 0;
    local_2990 = 0x101;
    FUN_010ccbc0(&local_38,*(undefined8 *)(param_1 + 0x78),9,*(undefined8 *)(param_1 + 0xb0),
                 *(undefined4 *)(param_1 + 0xb8));
    local_29a0[0] = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    local_298e = 0;
    FUN_01038170(*(undefined8 *)(param_1 + 0x90),local_29a0);
    goto LAB_010df99c;
  case 5:
    uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        lVar4 = FUN_010c8950();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            puVar6 = puVar6 + -10;
            goto LAB_010df9fc;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_010df9fc:
      FUN_010c6c30(puVar6,3);
      return 1;
    }
  default:
    return 0;
  }
  FUN_010dfd60(param_1,uVar5);
LAB_010df99c:
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return 0;
LAB_010dfafc:
  puVar6 = puVar6 + -10;
  goto LAB_010dfaa4;
}


