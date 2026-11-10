/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012cd460; name: FUN_012cd460
 */


void FUN_012cd460(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long *local_120 [12];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 *local_a0 [12];
  long local_38;
  
  lVar2 = FUN_012cc840();
  local_38 = *(long *)(lVar2 + 0x620);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x358);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_120[0] = &local_38;
  local_140 = &LAB_012d5910;
  local_138 = FUN_012d5970;
  local_130 = &LAB_012d5980;
  local_128 = &LAB_012d5990;
  local_c0 = PTR_LAB_02727728;
  local_b8 = (code *)PTR_FUN_02727730;
  local_b0 = PTR_LAB_02727738;
  local_a8 = PTR_LAB_02727740;
  local_a0[0] = (undefined1 *)&local_140;
  FUN_01306a00(lVar4,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(local_a0);
  }
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  uVar3 = FUN_012ce9d0(local_38);
  if ((uVar3 & 1) != 0) {
    FUN_012d59a0(*(undefined8 *)(lVar2 + 0x60),0x5bb9fe782a08de0,&local_38,1);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


