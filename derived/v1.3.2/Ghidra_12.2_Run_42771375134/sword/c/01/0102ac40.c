/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102ac40; name: FUN_0102ac40
 */


void FUN_0102ac40(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x200);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(char *)(lVar2 + 400) == '\0') {
    FUN_01519940(&local_68,lVar2);
  }
  else {
    FUN_01029c90(*(undefined8 *)PTR_DAT_027108c0);
    FUN_01029ad0(&local_68);
  }
  param_1[1] = uStack_60;
  param_1[2] = local_58;
  *param_1 = local_68;
  param_1[5] = local_40;
  param_1[6] = uStack_38;
  param_1[3] = local_50;
  param_1[4] = uStack_48;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


