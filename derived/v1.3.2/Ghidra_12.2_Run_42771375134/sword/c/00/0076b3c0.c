/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b3c0; name: FUN_0076b3c0
 */


uint FUN_0076b3c0(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  undefined4 local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 local_24;
  
  local_38 = 0;
  local_24 = 0xffffffff;
  local_28 = 0;
  local_3c = 0;
  plVar2 = *(long **)(param_1 + 0x38);
  if ((plVar2 == (long *)0x0) || (*(long *)(param_1 + 0x58) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_24,&local_38,&local_28,&local_3c);
    if (((uVar1 | 0x2000) == 0x2000) &&
       (FUN_00767a40(*(undefined8 *)(param_1 + 0x58),local_24,local_38,local_28), 0 < local_3c)) {
      iVar3 = 0;
      do {
        local_40 = 0;
        uVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x60))
                          (*(long **)(param_1 + 0x38),&local_24,&local_38,&local_28,&local_40);
        if ((uVar1 | 0x2000) == 0x2000) {
          FUN_00767a40(*(undefined8 *)(param_1 + 0x58),local_24,local_38,local_28);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_3c);
    }
  }
  return uVar1;
}


