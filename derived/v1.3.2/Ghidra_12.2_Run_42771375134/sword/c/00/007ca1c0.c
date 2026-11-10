/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ca1c0; name: FUN_007ca1c0
 */


undefined8 FUN_007ca1c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_108 [16];
  int local_f8 [9];
  char acStack_d4 [12];
  undefined1 auStack_c8 [152];
  
  lVar2 = *(long *)PTR_DAT_02716a30;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_018906d0(auStack_c8);
    FUN_01890740(local_f8,auStack_c8,
                 "W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGOZlLy8MYL",0x40);
    uVar1 = FUN_007b9800(*(long *)(param_1 + 8),*(undefined4 *)(*(long *)(param_1 + 8) + 0x4e0));
    FUN_01939830(auStack_c8,uVar1);
    FUN_01939890(auStack_c8,*(undefined4 *)(*(long *)(param_1 + 8) + 0x1f0));
    if (*(char *)(*(long *)(param_1 + 8) + 0x278) != '\0') {
      snprintf(acStack_d4,9,"%u",(ulong)*(uint *)(*(long *)(param_1 + 8) + 0x27c));
      FUN_01870100(local_f8,acStack_d4);
      FUN_018a03e0(auStack_108,auStack_c8,local_f8);
    }
    FUN_0193fe40(local_f8,lVar2,auStack_c8);
    if (local_f8[0] != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xd8))(*(long **)(param_1 + 8),local_f8);
    }
    FUN_018a0330(auStack_c8);
    uVar1 = 1;
  }
  return uVar1;
}


