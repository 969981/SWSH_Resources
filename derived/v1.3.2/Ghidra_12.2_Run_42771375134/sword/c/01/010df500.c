/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010df500; name: FUN_010df500
 */


undefined8 FUN_010df500(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long local_48 [2];
  undefined2 local_38;
  undefined1 local_36;
  long local_28;
  
  if (*(int *)(param_1 + 0xa8) == 1) {
    uVar3 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0))
      {
        plVar1 = (long *)(**(code **)*puVar4)(puVar4);
        lVar2 = FUN_010c8950();
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1 == (long *)lVar2) {
            uVar3 = FUN_010c6f20(puVar4 + -10);
            goto joined_r0x010df6bc;
          }
        }
      }
      uVar3 = FUN_010c6f20(0);
joined_r0x010df6bc:
      if ((uVar3 & 1) != 0) {
        FUN_010dc4a0(*(undefined8 *)(param_1 + 0x88),0);
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0
           )) {
          plVar1 = (long *)(**(code **)*puVar4)(puVar4);
          lVar2 = FUN_010c8950();
          for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
            if (plVar1 == (long *)lVar2) {
              puVar4 = puVar4 + -10;
              goto LAB_010df68c;
            }
          }
        }
        puVar4 = (undefined8 *)0x0;
LAB_010df68c:
        FUN_010c6ea0(puVar4);
        *(undefined8 *)(param_1 + 0xa4) = 0;
      }
    }
  }
  else if (*(int *)(param_1 + 0xa8) == 0) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar4)(puVar4);
      lVar2 = FUN_010c8950();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar4 = puVar4 + -10;
          goto LAB_010df568;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
LAB_010df568:
    FUN_010c6ef0(puVar4);
    FUN_00ffa290(*(undefined8 *)(param_1 + 0x90),1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    local_48[1] = 0;
    local_36 = 0;
    local_38 = 0x101;
    FUN_010ccbc0(&local_28,*(undefined8 *)(param_1 + 0x78),0x18,*(undefined8 *)(param_1 + 0xb0),
                 *(undefined4 *)(param_1 + 0xb8));
    local_48[0] = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    local_36 = 0;
    FUN_01038170(*(undefined8 *)(param_1 + 0x90),local_48);
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  return 0;
}


