/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00434da0; name: FUN_00434da0
 */


void FUN_00434da0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    *(undefined4 *)(param_1 + 600) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  if (*(long *)(param_1 + 0x288) != 0) {
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  if (*(long *)(param_1 + 0x2c0) != 0) {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  if (*(int *)(param_1 + 0x308) == 0) {
    lVar2 = *(long *)(param_1 + 0x2f8);
  }
  else {
    do {
      if (*(uint *)(param_1 + 0x300) == 0) {
LAB_00434fc0:
        plVar1 = (long *)0x0;
      }
      else {
        plVar3 = *(long **)(param_1 + 0x2f8);
        plVar1 = (long *)*plVar3;
        if (plVar1 == (long *)0x0) {
          uVar4 = 1;
          do {
            if (*(uint *)(param_1 + 0x300) <= uVar4) goto LAB_00434fc0;
            plVar1 = (long *)plVar3[uVar4];
            uVar4 = uVar4 + 1;
          } while (plVar1 == (long *)0x0);
        }
      }
      (**(code **)(*plVar1 + 0x18))();
    } while (*(int *)(param_1 + 0x308) != 0);
    lVar2 = *(long *)(param_1 + 0x2f8);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x300) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  return;
}


