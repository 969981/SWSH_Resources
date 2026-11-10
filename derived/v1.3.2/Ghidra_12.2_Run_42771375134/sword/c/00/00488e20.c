/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488e20; name: FUN_00488e20
 */


undefined8 FUN_00488e20(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *__src;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar4 = PTR_DAT_02712a90;
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 6);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      uVar8 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar7 = 0;
        do {
          if ((void *)(lVar5 + lVar7) != (void *)0x0) {
            puVar2 = (undefined8 *)(lVar5 + lVar7);
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)(puVar2 + 3) = 0xff;
            *(undefined1 *)(puVar2 + 4) = 0xff;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[7] = 0;
          }
          __src = (void *)(*param_1 + lVar7);
          memcpy((void *)(lVar5 + lVar7),__src,0x30);
          lVar3 = lVar5 + lVar7;
          lVar7 = lVar7 + 0x40;
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)((long)__src + 0x30);
          uVar8 = uVar8 - 1;
          *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)((long)__src + 0x38);
        } while (uVar8 != 0);
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar4,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


