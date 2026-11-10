/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010df290; name: FUN_010df290
 */


undefined8 FUN_010df290(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_29a0 [2];
  undefined2 local_2990;
  undefined1 local_298e;
  long local_38;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 2) {
    uVar4 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
    if ((uVar4 & 1) != 0) {
      FUN_010dc4a0(*(undefined8 *)(param_1 + 0x88),0);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0))
      {
        plVar2 = (long *)(**(code **)*puVar5)(puVar5);
        lVar3 = FUN_010c8950();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar5 = puVar5 + -10;
            goto LAB_010df3cc;
          }
        }
      }
      puVar5 = (undefined8 *)0x0;
LAB_010df3cc:
      FUN_010c6ea0(puVar5);
      *(undefined8 *)(param_1 + 0xa4) = 0;
    }
  }
  else if (iVar1 == 1) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_010c8950();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          uVar4 = FUN_010c6d30(puVar5 + -10);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          goto LAB_010df420;
        }
      }
    }
    uVar4 = FUN_010c6d30(0);
    if ((uVar4 & 1) != 0) {
LAB_010df420:
      uVar4 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
      if ((uVar4 & 1) != 0) {
        plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x5d0) + 0x60);
        (**(code **)(*plVar2 + 8))(plVar2,0);
        FUN_00ffa290(*(undefined8 *)(param_1 + 0x90),1,1);
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
        local_29a0[1] = 0;
        local_298e = 0;
        local_2990 = 0x101;
        FUN_010ccbc0(&local_38,*(undefined8 *)(param_1 + 0x78),0x18,*(undefined8 *)(param_1 + 0xb0),
                     *(undefined4 *)(param_1 + 0xb8));
        local_29a0[0] = local_38;
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        local_298e = 0;
        FUN_01038170(*(undefined8 *)(param_1 + 0x90),local_29a0);
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      }
    }
  }
  else if (iVar1 == 0) {
    if (*(long *)(*(long *)PTR_DAT_02710798 + 0x228) != 0) {
      (**(code **)(*(long *)(*(long *)(*(long *)PTR_DAT_02710798 + 0x228) + 0x48) + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    memset(local_29a0,0,0x2961);
  }
  return 0;
}


