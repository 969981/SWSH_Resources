/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140bf30; name: FUN_0140bf30
 */


void FUN_0140bf30(long *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  *(int *)(param_1 + 1) = param_2;
  *(uint *)((long)param_1 + 0xc) = param_3;
  if (param_2 == 0x96) {
    FUN_00ffd450(0x40c00000,*param_1,"anime_curry_ef_change");
    FUN_00ffd450((float)((ulong)*(uint *)(param_1 + 1) / 6),*param_1,"anime_L_curry_00_curry_change"
                );
    FUN_00ffd450(0x40400000,*param_1,"anime_pattern_curry");
    local_38 = 0x94dbb72c0e1a385;
    lVar3 = FUN_0167b6b0(*(undefined8 *)(*param_1 + 0x1b0),&local_38);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    local_38 = 0x94dba72c0e1a1d2;
    lVar3 = FUN_0167b6b0(*(undefined8 *)(*param_1 + 0x1b0),&local_38);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    local_38 = 0x94db972c0e1a01f;
    lVar3 = FUN_0167b6b0(*(undefined8 *)(*param_1 + 0x1b0),&local_38);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    FUN_00ffd450(0x40400000,*param_1,"anime_pattern_curry");
    uVar4 = 1;
  }
  else {
    if (param_3 < 3) {
      uVar5 = *(undefined4 *)(&DAT_0216cb08 + (long)(int)param_3 * 4);
    }
    else {
      uVar5 = 0;
    }
    uVar2 = FUN_01409f50(param_2);
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    FUN_0141b8a0(param_1 + (ulong)param_3 * 0x7a + 2,uVar2,uVar5,2,&local_c0);
    pcVar1 = local_b8;
    uVar4 = 0;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar1)(&local_a0);
      uVar4 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x170) = uVar4;
  return;
}


