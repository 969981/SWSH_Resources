/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01142460; name: FUN_01142460
 */


void FUN_01142460(long param_1,int *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_68;
  long local_58;
  
  iVar1 = *param_2;
  lVar3 = *(long *)(param_1 + 0x4c8);
  uVar2 = (ulong)param_3;
  if (iVar1 != 0) {
    FUN_0168c670(lVar3 + (ulong)(param_3 + 1) * 0x3e0);
    local_68 = *(long *)(param_1 + 0x6c0);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_011425c0(param_1 + 0x100,&DAT_02165948 + uVar2 * 8,&local_68,&DAT_02165968,0,*param_2);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_00ffd010(param_1 + 0x100,&UNK_02165970 + uVar2 * 8);
  }
  lVar3 = *(long *)(lVar3 + (ulong)(param_3 + 1) * 0x3e0 + 0x18);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | iVar1 != 0;
  }
  local_58 = *(long *)(&DAT_02165948 + uVar2 * 8);
  if ((local_58 != -0x340d631b7bddd9bb) && (local_58 != 0)) {
    lVar3 = FUN_0103bca0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | iVar1 != 0;
    }
  }
  return;
}


