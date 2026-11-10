/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9c70; name: FUN_003e9c70
 */


void FUN_003e9c70(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 local_28;
  char local_14 [4];
  
  uVar3 = *(ushort *)(param_2 + 0xb4);
  if (*(long *)(**(long **)(param_1 + 0x10f0) + 0x48) == 0) {
    if ((uVar3 >> 4 & 1) != 0) goto LAB_003e9d0c;
  }
  else if ((uVar3 >> 7 & 1) == 0) {
    *(ushort *)(param_2 + 0xb4) = uVar3 | 0x40;
    if ((uVar3 >> 4 & 1) != 0) {
      return;
    }
  }
  else {
    uVar1 = (ushort)(uVar3 & 0xffffff7f);
    *(ushort *)(param_2 + 0xb4) = uVar1;
    *(undefined1 *)(param_1 + 0x10e8) = 0;
    *(ushort *)(param_2 + 0xb4) = uVar1 | 0x40;
    if (((uVar3 & 0xffffff7f) >> 4 & 1) != 0) {
      return;
    }
  }
  local_28 = *(undefined8 *)(param_2 + 0x50);
  puVar2 = (undefined8 *)FUN_003f7480(param_1 + 0x1078,&local_28,local_14);
  if (local_14[0] == '\0') {
    *puVar2 = local_28;
  }
  uVar3 = *(ushort *)(param_2 + 0xb4);
LAB_003e9d0c:
  *(ushort *)(param_2 + 0xb4) = uVar3 | 0x10;
  return;
}


