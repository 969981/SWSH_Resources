/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ce320; name: FUN_001ce320
 */


void FUN_001ce320(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  char local_30;
  undefined7 uStack_2f;
  long *local_28;
  
  *param_2 = param_1;
  uVar1 = *(uint *)(param_2 + 1);
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    *(uint *)(param_2 + 1) = uVar1 & 0xfffffff | 0x80000000;
    FUN_001e0710(param_2,&local_28,&local_30,0);
    if (local_28 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)((long)local_28 + 0xb) & 0xf) * 8 + 0x30
                       ) + (long)local_28;
    }
    if (CONCAT71(uStack_2f,local_30) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(PTR_DAT_02711068 +
                       (ulong)(*(byte *)(CONCAT71(uStack_2f,local_30) + 0xb) & 0xf) * 8 + 0x30) +
              CONCAT71(uStack_2f,local_30);
    }
    FUN_003dfa70(param_1 + 0x10,param_2 + 3,lVar3,lVar4);
    return;
  }
  local_28 = param_2;
  if (uVar1 >> 0x1e < 3) {
    *(uint *)(param_2 + 1) = uVar1 & 0x3fffffff | 0x40000000;
    puVar2 = (undefined8 *)FUN_001d67d0(param_1 + 0x20f8,&local_28,&local_30);
    if (local_30 == '\0') {
      *puVar2 = local_28;
      return;
    }
  }
  else {
    *(uint *)(param_2 + 1) = uVar1 & 0x3fffffff | 0x80000000;
    if ((uVar1 >> 0x1c & 1) == 0) {
      FUN_001d6940(param_1 + 0x20f8,&local_28);
      return;
    }
  }
  return;
}


