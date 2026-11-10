/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001009b0; name: realloc
 */


void * realloc(void *__ptr,size_t __size)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_0075ede0();
  if ((uVar2 & 1) != 0) {
    nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
  }
  lVar3 = FUN_0075ecb0();
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar3 + 8))((undefined8 *)(lVar3 + 8));
  if (((*PTR_DAT_02710500 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02710500), iVar1 != 0))
  {
    uVar6 = FUN_00102930();
    *(undefined8 *)PTR_DAT_02710508 = uVar6;
    __cxa_guard_release(PTR_DAT_02710500);
  }
  do {
    if (plVar4 == (long *)0x0) {
      nn::diag::detail::OnAssertionFailure(2,&DAT_01d38550,&DAT_01d38550,&DAT_01d38550,0);
      FUN_0075ef10();
      lVar3 = 0;
LAB_00100a64:
      pvVar5 = (void *)FUN_00100ad0(lVar3,__ptr,__size);
      return pvVar5;
    }
    if (plVar4 == (long *)PTR_DAT_02710508) {
      FUN_0075ef10();
      goto LAB_00100a64;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


