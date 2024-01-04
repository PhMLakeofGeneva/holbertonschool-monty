#include "monty.h"

void stack_push (stack_t ** pp_stack, void *data)
{
   if (pp_stack != NULL)
   {
      stack_t *p_p = *pp_stack;
      stack_t *p_l = NULL;

      p_l = malloc (sizeof (*p_l));
      if (p_l != NULL)
      {
         p_l->n = data;
         p_l->next = NULL;
         p_l->prev = p_p;
         if (p_p != NULL)
            p_p->next = p_l;
         *pp_stack = p_l;
      }
      else
      {
         fprintf (stderr, "Memoire insuffisante\n");
         exit (EXIT_FAILURE);
      }
   }
   return;
}
