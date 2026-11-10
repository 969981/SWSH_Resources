/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f2730; name: FUN_011f2730
 */


undefined8 FUN_011f2730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  plVar3 = (long *)(param_1 + 0x80);
  if ((*plVar3 == *(long *)(param_1 + 0x88)) &&
     (*(long *)(param_1 + 0xb0) == *(long *)(param_1 + 0xb8))) {
    *(undefined4 *)(param_1 + 0x68) = 4;
    local_58 = *(undefined8 *)(param_1 + 0x60);
    local_48 = 0;
    uStack_50 = 0;
    FUN_011f2f40(&local_88,param_2,&local_58);
    plVar4 = *(long **)(param_1 + 0x80);
    if (plVar4 != (long *)0x0) {
      if (*(long **)(param_1 + 0x88) == plVar4) {
        plVar2 = plVar4;
      }
      else {
        plVar2 = *(long **)(param_1 + 0x88);
        do {
          plVar5 = plVar2 + -2;
          if (*plVar5 != 0) {
            (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
            plVar2[-2] = 0;
          }
          plVar2 = plVar5;
        } while (plVar4 != plVar5);
        plVar2 = (long *)*plVar3;
      }
      *(long **)(param_1 + 0x88) = plVar4;
      (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
                (*(long **)(param_1 + 0x98),plVar2,*(long *)(param_1 + 0x90) - (long)plVar2,8);
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *plVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x98) = local_70;
    *(undefined8 *)(param_1 + 0x80) = local_88;
    *(undefined8 *)(param_1 + 0x88) = local_80;
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x90) = local_78;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


