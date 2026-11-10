/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c0020; name: FUN_004c0020
 */


void FUN_004c0020(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar1 = PTR_DAT_02712de0;
  for (lVar3 = *(long *)(PTR_DAT_027134a8 + 0x10); lVar3 != 0; lVar3 = *(long *)(lVar3 + 400)) {
    uVar2 = FUN_0048e210(lVar3,param_1);
    if ((uVar2 & 1) != 0) {
      local_40 = 0x400000000;
      local_38 = 0;
      FUN_0048c100(lVar3,&local_40,1);
      FUN_004399e0(*(undefined8 *)puVar1,*(undefined8 *)(lVar3 + 0x160),0,0);
    }
  }
  FUN_004c5a10(param_1);
  return;
}


