/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01409670; name: FUN_01409670
 */


void FUN_01409670(long param_1)

{
  code *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  long local_38;
  
  lVar2 = *(long *)PTR_DAT_027107a8;
  FUN_0010d170(&local_38,"Play_Camp_Curry_OpenBook");
  FUN_006cf0c0(&local_c0,&local_38);
  FUN_008962c0(lVar2 + 0x108,&local_c0);
  if (local_a8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
    local_a8 = (undefined1 *)0x0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_140 = &LAB_0140bb10;
  local_b0 = &LAB_0140bbc0;
  local_c0 = &LAB_0140bb10;
  local_b8 = FUN_0140bbb0;
  local_a8 = &LAB_0140bbd0;
  local_128 = &LAB_0140bbd0;
  local_138 = FUN_0140bbb0;
  local_130 = &LAB_0140bbc0;
  alStack_120[0] = param_1;
  alStack_a0[0] = param_1;
  FUN_00ffd030(param_1 + 0x100,"anime_in",&local_140);
  pcVar1 = local_138;
  pcVar3 = FUN_0140bbb0;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(alStack_120);
    pcVar3 = local_b8;
  }
  FUN_00ffd280(param_1 + 0x100,"anime_L_curry_00_f_in_zukan");
  FUN_00ffa290(param_1,1,1);
  FUN_014097c0(param_1);
  if (pcVar3 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(alStack_a0);
  }
  return;
}


