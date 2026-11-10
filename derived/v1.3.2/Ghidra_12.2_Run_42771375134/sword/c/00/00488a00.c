/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488a00; name: FUN_00488a00
 */


undefined8 FUN_00488a00(long param_1,undefined4 *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  *param_2 = 0;
  do {
    lVar7 = param_1;
    param_1 = *(long *)(lVar7 + 0x78);
  } while (*(long *)(lVar7 + 0x78) != 0 && (*(uint *)(lVar7 + 0x98) & 0xffe) == 0);
  if ((*(long *)(lVar7 + 0x68) != 0) &&
     (((*(uint *)(lVar7 + 0x9c) & 0x300000) == 0x100000 ||
      ((*(long *)(lVar7 + 0x38) != 0 && (*(char *)(*(long *)(lVar7 + 0x38) + 2) < '\0')))))) {
    uVar2 = *(uint *)(*(long *)(lVar7 + 0x68) + 0xc);
    lVar7 = *(long *)PTR_DAT_02712ae8;
    pMVar1 = (MutexType *)(lVar7 + 0x150);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(lVar7 + 0x178);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar8 = *(long **)(*(long *)(lVar7 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
        if (*(uint *)(plVar8 + 2) == uVar2) {
          *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          uVar5 = (ulong)*(byte *)(plVar8 + 0x14);
          if ((uVar5 == 0xff) || (plVar8[uVar5 * 2 + 6] == 0)) {
            uVar6 = 0;
          }
          else {
            *param_2 = *(undefined4 *)
                        (plVar8[uVar5 * 2 + 6] + (ulong)((int)plVar8[uVar5 * 2 + 7] - 1) * 0xc);
            uVar6 = 1;
          }
          (**(code **)(*plVar8 + 0x18))(plVar8);
          return uVar6;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return 0;
}


