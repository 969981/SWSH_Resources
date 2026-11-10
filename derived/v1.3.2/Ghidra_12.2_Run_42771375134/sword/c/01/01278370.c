/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01278370; name: FUN_01278370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_01278370(long param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long local_38;
  
  lVar1 = FUN_007df930(*(undefined8 *)(param_1 + 0x38));
  pcVar2 = strstr(*(char **)(lVar1 + 8),"\"dataNo\":\"");
  pcVar2 = pcVar2 + 10;
  pcVar3 = strchr(pcVar2,0x22);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    _DAT_00000178 = 0;
    _DAT_00000170 = 0;
    _DAT_00000168 = 0;
    _DAT_00000160 = 0;
    _DAT_00000158 = 0;
    _DAT_00000150 = 0;
    _DAT_00000148 = 0;
    _DAT_00000140 = 0;
    _DAT_00000138 = 0;
    _DAT_00000130 = 0;
    _DAT_00000128 = 0;
    _DAT_00000120 = 0;
    _DAT_00000118 = 0;
    _DAT_00000110 = 0;
    _DAT_00000108 = 0;
    _DAT_00000100 = 0;
    _DAT_000000f8 = 0;
    _DAT_000000f0 = 0;
    _DAT_000000e8 = 0;
    _DAT_000000e0 = 0;
    _DAT_000000d8 = 0;
    _DAT_000000d0 = 0;
    _DAT_000000c8 = 0;
    _DAT_000000c0 = 0;
    _DAT_000000b8 = 0;
    _DAT_000000b0 = 0;
    _DAT_000000a8 = 0;
    _DAT_000000a0 = 0;
    _DAT_00000098 = 0;
    _DAT_00000090 = 0;
    lVar5 = 0x80;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    memcpy(&DAT_00000080,pcVar2,(long)pcVar3 - (long)pcVar2 & 0xffffffff);
  }
  else {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    FUN_012788c0(&local_38,lVar1);
    *(undefined8 *)(local_38 + 0x170) = 0;
    *(undefined8 *)(local_38 + 0x178) = 0;
    *(undefined8 *)(local_38 + 0x160) = 0;
    *(undefined8 *)(local_38 + 0x168) = 0;
    *(undefined8 *)(local_38 + 0x150) = 0;
    *(undefined8 *)(local_38 + 0x158) = 0;
    *(undefined8 *)(local_38 + 0x140) = 0;
    *(undefined8 *)(local_38 + 0x148) = 0;
    *(undefined8 *)(local_38 + 0x130) = 0;
    *(undefined8 *)(local_38 + 0x138) = 0;
    *(undefined8 *)(local_38 + 0x120) = 0;
    *(undefined8 *)(local_38 + 0x128) = 0;
    *(undefined8 *)(local_38 + 0x110) = 0;
    *(undefined8 *)(local_38 + 0x118) = 0;
    *(undefined8 *)(local_38 + 0x100) = 0;
    *(undefined8 *)(local_38 + 0x108) = 0;
    *(undefined8 *)(local_38 + 0xf0) = 0;
    *(undefined8 *)(local_38 + 0xf8) = 0;
    *(undefined8 *)(local_38 + 0xe0) = 0;
    *(undefined8 *)(local_38 + 0xe8) = 0;
    *(undefined8 *)(local_38 + 0xd0) = 0;
    *(undefined8 *)(local_38 + 0xd8) = 0;
    *(undefined8 *)(local_38 + 0xc0) = 0;
    *(undefined8 *)(local_38 + 200) = 0;
    *(undefined8 *)(local_38 + 0xb0) = 0;
    *(undefined8 *)(local_38 + 0xb8) = 0;
    *(undefined8 *)(local_38 + 0xa0) = 0;
    *(undefined8 *)(local_38 + 0xa8) = 0;
    *(undefined8 *)(local_38 + 0x90) = 0;
    *(undefined8 *)(local_38 + 0x98) = 0;
    *(undefined8 *)(local_38 + 0x80) = 0;
    *(undefined8 *)(local_38 + 0x88) = 0;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_012788c0(&local_38,lVar1);
    lVar5 = local_38;
    memcpy((void *)(local_38 + 0x80),pcVar2,(long)pcVar3 - (long)pcVar2 & 0xffffffff);
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_38 = 0;
    }
    FUN_012788c0(&local_38,lVar1);
    lVar5 = local_38 + 0x80;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return lVar5;
}


