/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00629ff0; name: FUN_00629ff0
 */


int FUN_00629ff0(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int local_44;
  
  local_44 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  lVar8 = *(long *)(param_1 + 0x478);
  if (lVar8 == 0) {
    local_44 = FUN_00629640(param_1,0);
    uVar2 = 0;
    if (local_44 != 0) goto LAB_0062a138;
    lVar8 = *(long *)(param_1 + 0x478);
  }
  puVar9 = *(uint **)(lVar8 + 0x18);
  uVar4 = *puVar9;
  __dest = *(void **)(lVar8 + 8);
  uVar1 = uVar4;
  if (param_2 <= uVar4) {
    uVar1 = param_2;
  }
  if (__dest == (void *)0x0) {
    __dest = (void *)FUN_006029c0(uVar6,8,0,uVar4,0,&local_44);
    *(void **)(lVar8 + 8) = __dest;
    uVar2 = 0;
    if (local_44 != 0) goto LAB_0062a138;
  }
  uVar7 = (ulong)uVar1;
  memcpy(__dest,param_3,uVar7 << 3);
  uVar4 = *puVar9;
  if (uVar1 < uVar4) {
    lVar3 = *(long *)(lVar8 + 8);
    puVar5 = (undefined8 *)(*(long *)(puVar9 + 4) + uVar7 * 0x30 + 0x10);
    do {
      *(undefined8 *)(lVar3 + uVar7 * 8) = *puVar5;
      uVar4 = *puVar9;
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 6;
    } while ((uint)uVar7 < uVar4);
  }
  uVar2 = FUN_006029c0(uVar6,8,0,uVar4,0,&local_44);
  if (local_44 == 0) {
    lVar3 = *(long *)(param_1 + 0x478);
    if (*(char *)(lVar3 + 0x30) == '\0') {
      FUN_0062b6d0(param_1);
      lVar3 = *(long *)(param_1 + 0x478);
    }
    FUN_0062b8c0(lVar3,uVar1,*(undefined8 *)(lVar8 + 8),uVar2);
    local_44 = FUN_0062a530(param_1,*puVar9,uVar2,0);
  }
LAB_0062a138:
  FUN_006028c0(uVar6,uVar2);
  return local_44;
}


