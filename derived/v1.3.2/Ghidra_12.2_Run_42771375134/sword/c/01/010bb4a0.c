/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bb4a0; name: FUN_010bb4a0
 */


void FUN_010bb4a0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char acStack_3c [12];
  
  uVar3 = FUN_010386c0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x84) = 5;
    *(undefined4 *)(param_1 + 0x7c) = 0x23;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
    puVar7 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      if (puVar7 != (undefined8 *)0x0) {
        plVar4 = (long *)(**(code **)*puVar7)(puVar7);
        lVar5 = FUN_010aad10();
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)lVar5) {
            puVar7 = puVar7 + -10;
            goto LAB_010bb53c;
          }
        }
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_010bb53c:
    uVar8 = *(undefined8 *)(*(long *)PTR_DAT_02710880 + 0xc0);
    if (*(char *)(puVar7 + 0x10) == '\0') {
      FUN_01196ce0(uVar8,6,0);
      return;
    }
    lVar5 = puVar7[0xf];
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar6 = FUN_0077d470(lVar5);
    uVar1 = FUN_0077d480(lVar5);
    FUN_0077dea0(acStack_3c,9,uVar6,uVar1);
    uVar2 = atoi(acStack_3c);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    FUN_01196ce0(uVar8,6,(ulong)uVar2 << 0x20 | 1);
  }
  return;
}


