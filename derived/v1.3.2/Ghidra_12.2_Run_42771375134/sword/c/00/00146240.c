/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00146240; name: FUN_00146240
 */


int FUN_00146240(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  void *__src;
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *__src_00;
  undefined1 auStack_90 [40];
  undefined4 local_68;
  
  FUN_00146420();
  uVar5 = (long)param_3 - 1;
  lVar7 = param_1 + uVar5 * 0x50;
  uVar6 = uVar5 & 0xffffffff;
  while( true ) {
    __src = (void *)(param_1 + 0x28 + (long)param_2 * 0x50);
    do {
      pvVar8 = __src;
      uVar4 = (*(code *)*param_4)((long)pvVar8 + 0x28,lVar7);
      __src = (void *)((long)pvVar8 + 0x50);
      param_2 = param_2 + 1;
    } while ((uVar4 & 1) != 0);
    __src_00 = (void *)(param_1 + 0x28 + (long)(int)uVar6 * 0x50);
    do {
      pvVar9 = __src_00;
      __src_00 = (void *)((long)pvVar9 + -0x50);
      uVar4 = (*(code *)*param_4)(lVar7,(long)pvVar9 + -0x78);
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while ((uVar4 & 1) != 0);
    if ((int)uVar3 <= param_2) break;
    uVar1 = *(undefined8 *)((long)pvVar8 + 0x30);
    uVar2 = *(undefined8 *)((long)pvVar8 + 0x38);
    uVar10 = *(undefined8 *)((long)pvVar8 + 0x40);
    local_68 = *(undefined4 *)((long)pvVar8 + 0x48);
    memcpy((void *)((ulong)auStack_90 | 4),__src,0x24);
    *(undefined8 *)((long)pvVar8 + 0x38) = *(undefined8 *)((long)pvVar9 + -0x68);
    *(undefined8 *)((long)pvVar8 + 0x30) = *(undefined8 *)((long)pvVar9 + -0x70);
    *(undefined8 *)((long)pvVar8 + 0x40) = *(undefined8 *)((long)pvVar9 + -0x60);
    *(undefined4 *)((long)pvVar8 + 0x48) = *(undefined4 *)((long)pvVar9 + -0x58);
    memcpy(__src,__src_00,0x24);
    *(undefined8 *)((long)pvVar9 + -0x70) = uVar1;
    *(undefined8 *)((long)pvVar9 + -0x68) = uVar2;
    *(undefined8 *)((long)pvVar9 + -0x60) = uVar10;
    *(undefined4 *)((long)pvVar9 + -0x58) = local_68;
    memcpy(__src_00,(void *)((ulong)auStack_90 | 4),0x24);
  }
  uVar1 = *(undefined8 *)((long)pvVar8 + 0x30);
  uVar2 = *(undefined8 *)((long)pvVar8 + 0x38);
  uVar10 = *(undefined8 *)((long)pvVar8 + 0x40);
  local_68 = *(undefined4 *)((long)pvVar8 + 0x48);
  memcpy((void *)((ulong)auStack_90 | 4),__src,0x24);
  param_1 = param_1 + uVar5 * 0x50;
  *(undefined8 *)((long)pvVar8 + 0x38) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)((long)pvVar8 + 0x30) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((long)pvVar8 + 0x40) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)((long)pvVar8 + 0x48) = *(undefined4 *)(param_1 + 0x20);
  memcpy(__src,(void *)(param_1 + 0x28),0x24);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  *(undefined4 *)(param_1 + 0x20) = local_68;
  memcpy((void *)(param_1 + 0x28),(void *)((ulong)auStack_90 | 4),0x24);
  return param_2;
}


