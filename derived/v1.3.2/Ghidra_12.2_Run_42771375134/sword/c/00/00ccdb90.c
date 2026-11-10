/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccdb90; name: FUN_00ccdb90
 */


/* WARNING: Removing unreachable block (ram,0x00ccdc9c) */

void FUN_00ccdb90(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  lVar1 = param_1 + 0x100;
  iVar4 = FUN_008783b0(param_2);
  pcVar2 = "anime_L_bg_00_ptn_endless";
  if (param_3 != 1) {
    pcVar2 = "anime_L_bg_00_ptn_normal";
  }
  FUN_00ffcf80(lVar1,pcVar2);
  *(byte *)(*(long *)(param_1 + 0x610) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x610) + 0x58) & 0xfe | param_3 == 1;
  FUN_00ffcf80(lVar1,"anime_L_bg_00_ptn_poke");
  uVar5 = 0x3f800000;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  FUN_00ffd450(uVar5,lVar1,"anime_L_bg_00_ptn_poke");
  if (iVar4 != 0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    FUN_0168c890(*(long *)(param_1 + 0x4c8) + 0x1b20,param_2,0,0,&local_c0);
    pcVar3 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar3)(auStack_a0);
    }
  }
  return;
}


