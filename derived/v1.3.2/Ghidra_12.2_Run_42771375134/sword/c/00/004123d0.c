/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004123d0; name: FUN_004123d0
 */


void FUN_004123d0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_198 [40];
  undefined1 auStack_170 [264];
  long local_68 [5];
  
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  uVar1 = FUN_0040c880(*(undefined8 *)(param_1 + 0x60));
  if ((uVar1 >> 0xe & 1) != 0) {
    FUN_00418860(auStack_170,param_1,0);
    lVar5 = local_68[0];
    if (local_68[0] != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      lVar2 = FUN_0040b100(param_1);
      if (*(long *)(local_68[0] + 0x18) == 0) {
        uVar4 = 0;
      }
      else {
        lVar3 = FUN_00419150(auStack_170,0);
        uVar4 = FUN_00419200(local_68,(lVar7 - lVar2) - lVar3);
      }
      FUN_0040b3b0(*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x4c),lVar5,uVar4,auStack_198);
      FUN_0048f680(*(undefined8 *)PTR_DAT_02712ad0,*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x2c)
                   ,0x4000,auStack_198);
    }
    FUN_004188d0(auStack_170);
  }
  if (**(long **)(param_1 + 0xa0) == 0) {
    lVar5 = param_1;
    do {
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        for (plVar6 = *(long **)(param_1 + 0x98); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if ((long *)plVar6[1] != (long *)0x0) {
            (**(code **)(*(long *)plVar6[1] + 200))();
          }
        }
        return;
      }
    } while (**(long **)(lVar5 + 0xa0) == 0);
  }
  return;
}


