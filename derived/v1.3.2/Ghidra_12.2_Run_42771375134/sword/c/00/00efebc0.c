/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efebc0; name: FUN_00efebc0
 */


void FUN_00efebc0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_28;
  
  FUN_00dfb1f0(&local_28,*(undefined8 *)PTR_DAT_027194e8);
  if (local_28 != 0) {
    if (*(int *)(local_28 + 0x54) != 0) {
      puVar3 = *(undefined8 **)(local_28 + 0x60);
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00a89c30();
      for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
      }
      lVar2 = *(long *)(param_1 + 0x168);
      if (lVar2 != 0) {
        uVar5 = puVar3[0xb];
        uVar4 = puVar3[10];
        *(undefined1 *)(lVar2 + 0xc0) = 1;
        *(undefined8 *)(lVar2 + 0xa8) = uVar5;
        *(undefined8 *)(lVar2 + 0xa0) = uVar4;
        lVar2 = *(long *)(param_1 + 0x170);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0xa8) = uVar5;
          *(undefined8 *)(lVar2 + 0xa0) = uVar4;
          *(undefined1 *)(lVar2 + 0xc0) = 1;
          lVar2 = *(long *)(param_1 + 0x178);
          if (lVar2 != 0) {
            *(undefined1 *)(lVar2 + 0xc0) = 1;
            *(undefined8 *)(lVar2 + 0xa8) = uVar5;
            *(undefined8 *)(lVar2 + 0xa0) = uVar4;
            lVar2 = *(long *)(param_1 + 0x180);
            if (lVar2 != 0) {
              *(undefined8 *)(lVar2 + 0xa8) = uVar5;
              *(undefined8 *)(lVar2 + 0xa0) = uVar4;
              *(undefined1 *)(lVar2 + 0xc0) = 1;
              lVar2 = *(long *)(param_1 + 0x188);
              if (lVar2 != 0) {
                *(undefined1 *)(lVar2 + 0xc0) = 1;
                *(undefined8 *)(lVar2 + 0xa8) = uVar5;
                *(undefined8 *)(lVar2 + 0xa0) = uVar4;
                lVar2 = *(long *)(param_1 + 400);
                if (lVar2 != 0) {
                  *(undefined1 *)(lVar2 + 0xc0) = 1;
                  *(undefined8 *)(lVar2 + 0xa8) = uVar5;
                  *(undefined8 *)(lVar2 + 0xa0) = uVar4;
                }
              }
            }
          }
        }
      }
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


