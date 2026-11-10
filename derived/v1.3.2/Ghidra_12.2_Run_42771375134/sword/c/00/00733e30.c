/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00733e30; name: FUN_00733e30
 */


void FUN_00733e30(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_007240a0(param_2);
  if (iVar1 != 0) {
    uVar4 = 0;
    puVar5 = (undefined4 *)(param_1 + 0xc);
    do {
      lVar2 = FUN_00724220(param_2,uVar4 & 0xffffffff);
      if (lVar2 != 0) {
        uVar6 = *(undefined8 *)(lVar2 + 0x88);
        uVar8 = *(undefined8 *)(lVar2 + 0x98);
        uVar7 = *(undefined8 *)(lVar2 + 0x90);
        *(undefined8 *)(puVar5 + -3) = *(undefined8 *)(lVar2 + 0x80);
        puVar5[-1] = (int)uVar6;
        *puVar5 = *(undefined4 *)(lVar2 + 0xa8);
        *(undefined8 *)(puVar5 + 1) = uVar7;
        puVar5[3] = (int)uVar8;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_007240a0(param_2);
      puVar5 = puVar5 + 0xc;
    } while (uVar4 < (uVar3 & 0xffffffff));
  }
  return;
}


