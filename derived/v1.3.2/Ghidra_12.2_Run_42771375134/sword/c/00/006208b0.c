/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006208b0; name: FUN_006208b0
 */


int FUN_006208b0(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  void *__src;
  ulong uVar10;
  
  pvVar7 = *(void **)(param_1 + 0x50);
  pvVar6 = *(void **)(param_1 + 0x58);
  pvVar9 = *(void **)(param_2 + 0x18);
  if (pvVar6 < pvVar7) {
    pvVar6 = *(void **)(param_1 + 0x48);
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar4 = (int)pvVar6 - (int)pvVar7;
  uVar2 = uVar3;
  if (uVar4 <= uVar3) {
    uVar2 = uVar4;
  }
  uVar10 = (ulong)uVar2;
  *(uint *)(param_2 + 0x20) = uVar3 - uVar2;
  *(ulong *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + uVar10;
  iVar1 = 0;
  if (uVar2 == 0 || param_3 != -5) {
    iVar1 = param_3;
  }
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    uVar5 = (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68),pvVar7,uVar10);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_2 + 0x60) = uVar5;
  }
  memcpy(pvVar9,pvVar7,uVar10);
  pvVar7 = (void *)((long)pvVar7 + uVar10);
  pvVar9 = (void *)((long)pvVar9 + uVar10);
  iVar8 = iVar1;
  if (pvVar7 == *(void **)(param_1 + 0x48)) {
    __src = *(void **)(param_1 + 0x40);
    pvVar6 = *(void **)(param_1 + 0x58);
    if (*(void **)(param_1 + 0x58) == pvVar7) {
      *(void **)(param_1 + 0x58) = __src;
      pvVar6 = __src;
    }
    uVar4 = (int)pvVar6 - (int)__src;
    uVar3 = *(uint *)(param_2 + 0x20);
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      uVar2 = uVar4;
    }
    uVar10 = (ulong)uVar2;
    *(uint *)(param_2 + 0x20) = uVar3 - uVar2;
    *(ulong *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + uVar10;
    iVar8 = 0;
    if (uVar2 == 0 || iVar1 != -5) {
      iVar8 = iVar1;
    }
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      uVar5 = (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68),__src,uVar10);
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      *(undefined8 *)(param_2 + 0x60) = uVar5;
    }
    memcpy(pvVar9,__src,uVar10);
    pvVar9 = (void *)((long)pvVar9 + uVar10);
    pvVar7 = (void *)((long)__src + uVar10);
  }
  *(void **)(param_2 + 0x18) = pvVar9;
  *(void **)(param_1 + 0x50) = pvVar7;
  return iVar8;
}


