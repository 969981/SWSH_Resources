/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df9400; name: FUN_00df9400
 */


uint FUN_00df9400(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x290) == '\0')) || (*(long *)(lVar2 + 0x68) == 0)) ||
     (*(char *)(*(long *)(lVar2 + 0x68) + 0x170) == '\0')) {
    uVar1 = 1;
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  else {
    uVar1 = FUN_00e011d0();
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x290) != '\0')) &&
     ((*(long *)(lVar2 + 0x68) != 0 && (*(char *)(*(long *)(lVar2 + 0x68) + 0x170) != '\0')))) {
    uVar1 = FUN_00e011d0();
  }
  lVar2 = *(long *)PTR_DAT_02717c48;
  local_50 = *(undefined8 *)(lVar2 + 0xf0);
  local_48 = *(undefined8 *)(lVar2 + 0xf8);
  local_40 = *(undefined8 *)(lVar2 + 0x100);
  local_38 = *(long *)(lVar2 + 0x108);
  if (local_38 == 0) {
    FUN_00df9820(param_1,&local_50);
  }
  else {
    plVar3 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00df9820(param_1,&local_50);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return uVar1 & 1;
}


