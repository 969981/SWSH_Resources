/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8df20; name: FUN_00c8df20
 */


uint FUN_00c8df20(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_48;
  long *local_38;
  
  lVar2 = *(long *)(param_1 + 0x270);
  if (lVar2 != 0) {
    lVar4 = 0;
    uVar1 = 1;
    do {
      uVar3 = FUN_00c834c0(lVar2,*(undefined1 *)(param_1 + 0x2e3 + lVar4));
      FUN_00c825a0(&local_38);
      FUN_00c825f0(&local_48,uVar3);
      if (local_38 != (long *)0x0) {
        if (uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = (**(code **)(*local_38 + 0x90))();
        }
        uVar1 = uVar1 & 1;
      }
      if (local_48 != (long *)0x0) {
        if (uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = (**(code **)(*local_48 + 0x90))();
          uVar1 = uVar1 & 1;
          if (local_48 == (long *)0x0) goto LAB_00c8dfe0;
        }
        (**(code **)(local_48[9] + 0x18))();
        local_48 = (long *)0x0;
      }
LAB_00c8dfe0:
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      if (lVar4 == 0xb4) goto code_r0x00c8e000;
      lVar2 = *(long *)(param_1 + 0x270);
      lVar4 = lVar4 + 0xc;
    } while( true );
  }
LAB_00c8e004:
  if (*(uint *)(param_1 + 0x3a4) < 6) {
    return 0x29U >> (ulong)(*(uint *)(param_1 + 0x3a4) & 0x1f) & 1;
  }
  return 0;
code_r0x00c8e000:
  if (uVar1 == 0) {
    return 0;
  }
  goto LAB_00c8e004;
}


