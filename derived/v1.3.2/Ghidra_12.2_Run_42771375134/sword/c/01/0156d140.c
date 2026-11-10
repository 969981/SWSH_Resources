/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156d140; name: FUN_0156d140
 */


long FUN_0156d140(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x60);
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar5 - lVar4 == -0x220) {
    if (lVar4 != lVar5) {
      lVar6 = 0;
      do {
        lVar1 = lVar5 + lVar6;
        pcVar3 = *(code **)(lVar1 + -0x78);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar1 + -0x70) = 0;
          *(undefined8 *)(lVar1 + -0x68) = 0;
          *(undefined8 *)(lVar1 + -0x80) = 0;
          *(undefined8 *)(lVar1 + -0x78) = 0;
          (*pcVar3)(lVar1 + -0x60);
        }
        pcVar3 = *(code **)(lVar1 + -0xf8);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar1 + -0xf0) = 0;
          *(undefined8 *)(lVar1 + -0xe8) = 0;
          *(undefined8 *)(lVar1 + -0x100) = 0;
          *(undefined8 *)(lVar1 + -0xf8) = 0;
          (*pcVar3)(lVar1 + -0xe0);
        }
        pcVar3 = *(code **)(lVar1 + -0x178);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar1 + -0x168) = 0;
          *(undefined8 *)(lVar1 + -0x170) = 0;
          *(undefined8 *)(lVar1 + -0x178) = 0;
          *(undefined8 *)(lVar1 + -0x180) = 0;
          (*pcVar3)(lVar1 + -0x160);
        }
        pcVar3 = *(code **)(lVar1 + -0x1f8);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar1 + -0x1e8) = 0;
          *(undefined8 *)(lVar1 + -0x1f0) = 0;
          *(undefined8 *)(lVar1 + -0x1f8) = 0;
          *(undefined8 *)(lVar1 + -0x200) = 0;
          (*pcVar3)(lVar1 + -0x1e0);
        }
        lVar2 = *(long *)(lVar1 + -0x208);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
          *(long *)(lVar1 + -0x208) = 0;
        }
        lVar6 = lVar6 + -0x220;
      } while (lVar4 - lVar5 != lVar6);
    }
    *(long *)(param_1 + 0x68) = lVar4;
  }
  else {
    FUN_0156d890((long *)(param_1 + 0x60),1);
    lVar4 = *(long *)(param_1 + 0x68);
  }
  return lVar4 + -0x220;
}


