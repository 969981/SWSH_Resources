/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140c100; name: FUN_0140c100
 */


void FUN_0140c100(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 local_38;
  
  FUN_0168b630(param_1 + 2);
  FUN_0168b630(param_1 + 0x7c);
  FUN_0168b630(param_1 + 0xf6);
  if (((char)param_1[0x170] == '\0') &&
     (*(char *)((long)param_1 + (ulong)*(uint *)((long)param_1 + 0xc) * 0x3d0 + 0x3d2) != '\0')) {
    FUN_00ffd450((float)(*(uint *)(param_1 + 1) % 6),*param_1,"anime_curry_ef_change");
    FUN_00ffd450((float)((ulong)*(uint *)(param_1 + 1) / 6),*param_1,"anime_L_curry_00_curry_change"
                );
    uVar4 = NEON_ucvtf(*(undefined4 *)((long)param_1 + 0xc));
    FUN_00ffd450(uVar4,*param_1,"anime_pattern_curry");
    if (*(int *)((long)param_1 + 0xc) == 1) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (float)(*(int *)((long)param_1 + 0xc) + 1);
    }
    FUN_00ffd450(fVar5,*param_1,"anime_L_curry_00_size");
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    bVar1 = FUN_0152a940(lVar3,(int)param_1[1],0);
    local_38 = 0x94dbb72c0e1a385;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(*param_1 + 0x1b0),&local_38);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1 & 1;
    bVar1 = FUN_0152a940(lVar3,(int)param_1[1],1);
    local_38 = 0x94dba72c0e1a1d2;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(*param_1 + 0x1b0),&local_38);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1 & 1;
    bVar1 = FUN_0152a940(lVar3,(int)param_1[1],2);
    local_38 = 0x94db972c0e1a01f;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(*param_1 + 0x1b0),&local_38);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1 & 1;
    uVar4 = NEON_ucvtf(*(undefined4 *)((long)param_1 + 0xc));
    FUN_00ffd450(uVar4,*param_1,"anime_pattern_curry");
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  return;
}


