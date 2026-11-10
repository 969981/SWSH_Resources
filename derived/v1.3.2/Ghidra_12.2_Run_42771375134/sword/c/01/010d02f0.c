/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d02f0; name: FUN_010d02f0
 */


undefined8 FUN_010d02f0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long local_28;
  
  uVar1 = 1;
  switch(*(undefined4 *)(param_1 + 0xfc)) {
  case 0:
    uVar2 = FUN_010d0770(param_1);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xfc) = 1;
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0xd8) == '\0') {
      lVar5 = *(long *)PTR_DAT_0271cba8;
      if (lVar5 != 0) {
        lVar3 = FUN_010d2200(&local_28,*(undefined8 *)(param_1 + 8));
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x100) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x100) = 0;
        }
        *(long *)(param_1 + 0x100) = lVar3;
        local_28 = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
        }
        FUN_011f6ad0(lVar5,&local_28);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
      }
      uVar4 = 2;
LAB_010d0408:
      *(undefined4 *)(param_1 + 0xfc) = uVar4;
    }
    break;
  case 2:
    lVar5 = *(long *)(param_1 + 0x100);
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x60) != '\0')) &&
       (FUN_011f7650(&local_28,lVar5 + 0x68), local_28 != 0)) {
      uVar4 = 3;
      goto LAB_010d0408;
    }
    break;
  case 3:
    goto switchD_010d0324_caseD_3;
  }
  uVar1 = 0;
switchD_010d0324_caseD_3:
  return uVar1;
}


